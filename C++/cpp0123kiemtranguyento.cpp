#include<iostream>
#include<cmath>

using namespace std;

int ktra(int n){
	int m;
	if(n < 2){
		return 0;
	}
	for(m = 2; m <= sqrt(n); m ++){
		if(n % m == 0){
			return 0;
		}
	}
	return 1;
}

main () {
	int n;
	cin >> n;
	if(ktra(n) == 1){
	    cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
