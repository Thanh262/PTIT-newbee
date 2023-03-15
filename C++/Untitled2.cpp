#include<bits/stdc++.h>
using namespace std; 
int a[101], b[101], n, k, tam, dem; vector<vector<int>> vt; vector<int> v;

void in(int m){
	v.clear(); int x;
	for(int i=1;i<=m;i++){
		x=a[b[i]];
		v.push_back(x);
	}
	vt.push_back(v);
}

void Try(int i){
	for(int j=b[i-1]+1;j<=n;j++){
		if(tam+a[j]<=k){
			tam=tam+a[j]; b[i]=j;
			if(tam==k){
				dem++;
				in(i);	
			} 
			else Try(i+1);
			tam=tam-a[j];
		}
	}
}

int main(){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1); tam=0; dem=0;
		Try(1);
		for(int i=vt.size()-1;i>=0;i--){
			for(auto j:vt[i]){
				cout<<j<<" ";
			}
			cout<<endl;
		}
		cout<<dem<<endl;
}




