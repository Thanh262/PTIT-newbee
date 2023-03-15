#include<iostream>
#include<cmath>

using namespace std;

main (){
	int t,i,j;
	int n, min0;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		min0 = 1000000;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			for(j = i + 1; j < n; j++){
				if(abs(min0) > abs(a[i] + a[j])){
					min0 = a[i] + a[j];
				}
			}
		}
		cout << min0 << endl;
	}
}

