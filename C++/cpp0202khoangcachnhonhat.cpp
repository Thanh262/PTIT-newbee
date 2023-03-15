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

void sapxep(int a[], int n){
	int m, k;
	for(m = 0; m < n; m++){
		for(k = m+1; k < n; k++){
			if(a[m] > a[k]){
				swap(a[m], a[k]);
			}
		}
	}
}

void minhieu(int a[], int n){
	int min = 1000;
	for(int i = 0; i < n-1; i++){
		if(a[i+1] - a[i] < min ){
			min = a[i+1] - a[i];
		}
	}
	cout << min << endl;
}

main () {
	int sobotest, i, j;
	int a[1000];
	int n;
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++){
		cin >> n;
		nhapmang(a, n);
		sapxep(a, n);
		minhieu(a, n);
	}
}
