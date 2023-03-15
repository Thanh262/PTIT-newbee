#include<iostream>

using namespace std;

long long UCLN(long long a, long long b){
	while(a*b != 0){
		if(a > b){
			a %=b;
		}else{
			b %=a;
		}
	}
	return a+b;
}

long long BCNN(long long a, long long b){
	return a*b/UCLN(a,b);
}

main (){
	long long a,b,ucln,bcnn,sobotest;
	int i, j;
	cin>> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> a;
		bcnn = 1;
		for(j = 1; j <= a; j++){
		   b = bcnn;
		   bcnn = BCNN(b,j); 
		}
		cout << bcnn <<endl;
	}
}

