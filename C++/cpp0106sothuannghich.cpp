#include<iostream>

using namespace std;

int doixung(long long s){
	long long m = 0, n = s;
	while(s > 0){
		m = m*10 + s%10;
		s /= 10;
	}
	if(m == n){
		return 1;
	}else{
		return 0;
	}
}

main () {
    long long s;
    int sobotest, i;
    cin >> sobotest;
    for(i = 0; i < sobotest; i++){
    	cin >> s;
    	if(doixung(s) == 1){
    		cout <<"YES";
		}else{
			cout << "NO";
		}
		cout << endl;
	}
}
