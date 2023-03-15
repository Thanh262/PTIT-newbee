#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int loop;
    cin>>loop;
    while(loop--) {
        int m,n;
        cin>>m>>n;
        int *a=new int[m*m];
        for(int i=0;i<m*m;i++) {
            cin>>a[i];
        }
        sort(a,a+m*m);
        cout<<a[n-1]<<endl;
    }
}
