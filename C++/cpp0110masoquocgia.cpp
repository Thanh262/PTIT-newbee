#include<iostream>
#include<math.h>
using namespace std;

long long xuly(long long n){
	long long s = 0;
	int d = 0;
	while(n>0){
		if(n % 1000 == 84){
			n /= 1000;
	    }
	    s += (n % 10)*pow(10,d);
	    d++;
	    n /= 10;
   }
   return s;
}

main () {
	int sobotest, i;
	long long n;
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++){
		cin >> n;
		cout << xuly(n)<< endl;
	}
}

