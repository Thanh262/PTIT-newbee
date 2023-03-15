#include<iostream>

using namespace std;

void swap(int &a, int &b){
	int temp = a;
	    a = b;
	    b = temp;
}

void nhapmang(int a[], int n){
	for(int g = 0; g < n; g++){
		cin >> a[g];
	}
}

void max(int a[], int n, int k){
	int j, h;
	for(j = 0; j < n; j++){
		for(h = j+1; h < n; h++){
			if(a[j] > a[h]){
				swap(a[j], a[h]);
			}
		}		
	}
	cout << a[k - 1] << endl;
}

main () {
	int sobotest, i;
	int k , n;
	int *a = new int [100000];
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++){
		cin >> n >> k;
		nhapmang(a,n);
		max(a, n, k);
	}
}
