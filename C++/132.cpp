#include <iostream>

using namespace std;
int main(){
	int loop;
	cin >> loop;
	while(loop--){
		int n,m;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int max = a[n-1]-a[n-2];
		for(int i=n-1;i>0;i--){
			for(int j=i-1;j>=0;j--){
				if(a[i]-a[j]>max) max=a[i]-a[j];
			}
		}
		if(max<=0)cout<<-1<<endl; else cout<<max<<endl;
	}
}

