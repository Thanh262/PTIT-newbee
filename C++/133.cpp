#include<bits/stdc++.h>
using namespace std;
int main() {
    int loop;
    cin>>loop;
    while(loop--) {
        int n;cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int *f=new int[n];
        int result =1;
        f[0]=1;
        for(int i=1;i<n;i++) {
            f[i]=1;
            for(int j=0;j<i;j++) if(a[j]<a[i]) {
                f[i]=max(f[i],f[j]+1);
            }
            result = max(result,f[i]);
        }
        cout<<result<<endl;
    }
}
