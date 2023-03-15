#include<iostream>

using namespace std;

int hama(int a[], int n){
	if(n == 1){
		return 2;
	}
	if(n == 2){
		return 3;
	}
	if(n < 1){
		return 0;
	}
	return a[n] = hama(a, n-1) + hama(a, n-2);
}

main (){
	int n;
	cin >> n;
	int a[n];
	int kq = hama(a,n);
	cout << kq;
}
