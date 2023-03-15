#include<iostream>

using namespace std;


void nhapmang(int a[], int n){
	for(int g = 0; g < n; g++){
		cin >> a[g];
	}
}

void max(int a[], int n){
    int j, max = 0;
    for(j = 0; j < n ; j++){
    	if(a[j] > max){
    		max = a[j];
		}
	}
	cout << max << endl;
}

main () {
	int sobotest, i;
	int  n;
	int *a = new int [100000];
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++){
		cin >> n ;
		nhapmang(a,n);
		max(a, n);
	}
}
