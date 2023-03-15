#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int loop;
    cin>>loop;
    while(loop--) {
        long long int a;
        cin>>a;
        long long int *c=new long long int[a];
        for(long long int i=0;i<a;i++) {
            cin>>c[i];
        }
        long long int max=0;
        for(long long int i=0;i<a-1;i++) {
            long long int tich=c[i];
            if(tich>max) max=tich;
            for(long long int j=i+1;j<a;j++) {
                tich*=c[j];
                if(tich > max) max=tich;
            }
        }
        if(c[a-1]>max) max=c[a-1];
        cout<<max<<endl;
    }
}
