#include<iostream>

using namespace std;

main () {
	int sobotest, i, j;
	int n, t, a, d;
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++){
		cin >> t >> a;
		d = 0;
		for(j = 1; j < 100; j++){
			if(t*j%a==1){
				cout << j<< endl;
				d = 1;
				break;
			}
		}
		if(d == 0){
			cout << -1 << endl;
		}
	}
}


