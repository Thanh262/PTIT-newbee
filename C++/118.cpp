#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int loop;
    cin>>loop;
    while(loop--) {
        int n,b=0,c=1,d=0;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n;i++) {
            if(a[i]==0) {
                cout<<a[i]<<" ";
                continue;
            }
            while(1) {
                d=b+c;
                if(d==a[i]) {
                    cout<<a[i]<<" ";
                    break;
                }
                if(d>a[i]) break;
                b=c;c=d;
            }
            b=0;c=1;d=0;
        }
        cout<<endl;
    }
}
