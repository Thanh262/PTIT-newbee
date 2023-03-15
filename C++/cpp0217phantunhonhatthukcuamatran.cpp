#include<iostream>
#include<algorithm>

using namespace std;

void nhapmang(int a[], int m){
	for(int i = 0; i < m; i++){
	     cin >> a[i];
	}
}

main () {
	int sobotest, i, j;
	int n, k, m;
	cin >> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> n >> k;
		m = n*n;
		int a[m];
		nhapmang(a,m);
		sort(a, a+m);
		cout << a[k - 1] << endl;
	}
}
