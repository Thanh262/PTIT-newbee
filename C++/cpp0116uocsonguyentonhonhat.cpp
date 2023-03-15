#include<iostream>

using namespace std;

void xulyy(int n){
	if(n < 2){
		return;
	}
	if(n % 2 == 0){
		cout << 2 << " ";
		return;
	}
	if(n % 3 == 0){
		cout << 3 << " ";
		return;
	}
	int a = 5;
	while(a*a <= n){
		if(n % a == 0){
			cout << a << " ";
			return;
		}
		if(n % (a+2) == 0){
			cout << a+2 << " ";
			return;
		}
		a += 6;
	}
	cout << n << " ";
	return;
}

main () {
	int sobotest, i, j, n;
	cin >> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> n;
		cout << 1 << " ";
		for(j = 2; j <= n; j++ ){
		   xulyy(j);
	    }
		cout << endl;
	}
}


