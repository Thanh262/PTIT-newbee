#include<iostream>
using namespace std;
int main() {
    int loop;cin>>loop;
    while(loop--) {
        int a;
        cin>>a;
        long long *c=new long long[a];
        for(int i=0;i<a;i++) {
            cin>>c[i];
        }
        int dem=0;
        for(int i=0;i<a;i++) {
            if(c[i]!=0) cout<<c[i]<<" ";
            else {dem++;}
        }
        for(int i=0;i<dem;i++) {
            cout<<"0"<<" ";
        }
        cout<<endl;
    }
}
