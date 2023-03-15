#include<iostream>

using namespace std;

int xuly(int n, int k){
	if(n < 2){
		return -1;
	}
	int j = 0;
	while(n % 2 == 0){
		n /= 2;
		j++;
		if(j == k){
			return 2;
		}
	}
	while(n % 3 == 0){
		n /= 3;
		j++;
		if(j == k){
			return 3;
		}
	}
	int l = 5;
	while(l*l <= n){
		while(n % l == 0){
			n /= l;
			j++;
			if(j == k){
				return l;
			}
		}
		while(n % (l+2) == 0){
		    n /= (l+2);
		    j++;
		    if( j == k){
		    	return l+2;
			}
	    }
	    l += 6;
	}
	if((j+1) == k && n != 1 ){
		return n;
	}else {
		return -1;
	}
}

main () {
	int sobotest, i, k, n;
	cin >> sobotest;
	for(i = 0 ; i < sobotest; i ++){
		cin >> n >> k;
		cout << xuly(n, k);
		cout << endl;
	}
}
