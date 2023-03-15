#include<iostream>

using namespace std;

int xuly(long long n){
	int k = n % 10;
	n /= 10;
	int l;
	while(n > 0){
		l  = n % 10;
		if(k - l == 1 || l - k == 1){
			k = l;
		}else{
			return 0;
		}
		n /= 10;
	}
	return 1;
}

main () {
    int sobotest, i, j;
    long long n;
    cin >> sobotest;
    for(i = 0; i < sobotest; i ++){
    	cin >> n;
    	if(xuly(n) == 1){
		   cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
