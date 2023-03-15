#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    while(n--) {
        char a[1000],b[1000],c[1000];
		int nho=0;
		cin>>a>>b;
        if(strlen(a)<strlen(b)){
			char t[1000];
			strcpy(t,a);
			strcpy(a,b);
			strcpy(b,t);
		}
		if(strlen(a)==strlen(b)&&a[0]<b[0]){
			char t[1000];
			strcpy(t,a);
			strcpy(a,b);
			strcpy(b,t);
		}
        for(int i=strlen(b)-1;i>=0;i--){
			if(a[strlen(a)-strlen(b)+i]>=b[i]+nho){
				c[strlen(a)-strlen(b)+i]=(char)a[strlen(a)-strlen(b)+i]-b[i]-nho+48;
				nho=0;
			} else {
				c[strlen(a)-strlen(b)+i]=(char)a[strlen(a)-strlen(b)+i]-b[i]-nho+10+48;
				nho=1;
			}
		}
		for(int i=strlen(a)-strlen(b)-1;i>=0;i--){
			if(a[i]<nho+48){ 
				c[i]=(char)a[i]-nho+10;
				nho=1;
			} else {
				c[i]=(char)a[i]-nho;
				nho=0;
			}
		}
		for(int i=0;i<strlen(a);i++)cout<<c[i];
		cout<<endl;
	}
}

