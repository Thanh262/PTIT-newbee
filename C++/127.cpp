#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    int loop;
    cin>>loop;
    cin.ignore();
    while(loop--) {
        string a;
        int d=1,c=0,t;
        cin>>a;
        if(a[0]=='D') {
            while(a[d]=='D') {
                d+=1;
            }
            cout<<d+1;
            for(int j=d;j>0;j--) cout<<j;
    } else {
        cout<<1;
        d=0;
    }
    if(d>=1)t=d; else t=c;
    for(int i=t;i<a.length();i++) {
        if(a[i]=='I'&&a[i+1]=='D') {
            int end=i+1;
            while(a[end]=='D') {
                end+=1;
            }
            end=end-i-1;
            cout<<t+1+end+1;
            for(int j=1;j<=end;j++) cout<<t+1+end+1-j;
            t+=end+1;
            i+=end;
            continue;
        }
        if(a[i]=='I') {
            cout<<i+1+1;
            t+=1;
        }
    }
    cout<<endl;
    }
    return 0;
}

