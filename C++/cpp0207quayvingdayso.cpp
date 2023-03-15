#include<iostream>

using namespace std;

void nhapmang(int a[], int n){
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
}

void quayvong(int a[],int n, int d){
	int b[n], i, j;
	for(j = 0; j < n;  j++){
		b[j] = a[j];
	}
	for(i = 0; i < n-d; i++){
		a[i] = b[i+d];
	}
	j = 0;
	for(i = n - d ; i < n ; i++){
		a[i] = b[j];
		j++;
	}
}

main () {
	int sobotest, i, j;
	int *a = new int[1000000];
	int n,d;
	cin >> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> n >> d;
		nhapmang(a, n);
	    quayvong(a, n, d);
	    for(j = 0; j < n; j ++){
	    	cout << a[j] << " ";
		}
		cout << endl;
	}
}
