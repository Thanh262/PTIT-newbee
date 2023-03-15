#include<iostream>

using namespace std;

void nhapmang(int a[], int n){
	for(int j = 0; j < n ;j ++){
		cin >> a[j];
	}
}

void phantubenhat(int a[], int n){
	int m, k;
	for(m = 0; m < n; m++){
		for(k = 0; k < n; k++){
		   if(a[k] == m + 1){
		   	break;
		   }
		   if(k == n - 1){
		   	cout << m + 1 ;
		   	return;
		   }
		}
	}
	cout << n + 1;
	return;
}

main () {
	int sobotest, i, n;
	cin >> sobotest;
	int *a = new int[1000000];
	for(i = 0; i < sobotest; i++){
		cin >> n;
	    nhapmang(a,n);
	    phantubenhat(a, n);
	    cout << endl;
	}
}
