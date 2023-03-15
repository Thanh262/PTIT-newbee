#include<iostream>

using namespace std;

main (){
	int t, i, j;
	cin >> t;
	int n, k;
	int dem;
	while(t--){
		cin >> n >> k;
		int a[n];
		dem = 0;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			for(j = i+1; j < n; j++){
				if(a[i] + a[j] == k){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
}
