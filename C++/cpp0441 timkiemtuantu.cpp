#include<iostream>

using namespace std;

main (){
	int t, i, j;
	cin >> t;
	int n, x, d;
	while(t--){
		cin >> n >> x;
		int a[n];
		d = 0;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			if(a[i] == x){
				cout << 1 << endl;
				d = 1;
				break;
			}
		}
		if(d == 0){
			cout << -1 << endl;
		}
	}
}
