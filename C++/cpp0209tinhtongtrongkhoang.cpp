#include<iostream>

using namespace std;

void nhapmang(int a[], int n){
	for(int g = 0; g < n; g++){
		cin >> a[g];
	}
}

void nhapcauhoi(int &l, int &r){
	cin >> l >> r;
}

void traloi(int a[], int l, int r){
	int tong = 0;
	for(int j = l - 1; j < r; j++ ){
		tong += a[j];
	}
	cout << tong << endl;
}

main () {
	int sobotest, i, j;
	int n, q;
	int l, r;
	int a[10000];
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++){
		cin >> n >> q;
		nhapmang(a, n);
		for(j = 0; j < q; j++){
		   nhapcauhoi(l, r);
		   traloi(a, l, r);
	    }
	}
}
