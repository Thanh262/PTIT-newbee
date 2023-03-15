#include<iostream>

using namespace std;

main (){
	int t, i, j;
	int n, x, vitri;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n];
		for(j = 0; j < n; j++){
			cin >> a[j];
			if(a[j] == x){
				vitri = 1 + j;
			}
		}
		cout << vitri << endl;
	}
}
