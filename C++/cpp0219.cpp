#include<iostream>

using namespace std;

void nhapmang(int a[][100], int m, int n, int checkh[], int checkc[]){
	int i, j ;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> a[i][j];
			if(a[i][j] == 1){
				checkh[i] = 1;
				checkc[j] = 1;
			}
		}
	}
}

void xuly(int a[][100], int m, int n, int checkh[], int checkc[]){
	int i, j ;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
		   if(checkc[j] == 1 || checkh[i] == 1){
		   	   cout << 1 << " ";
		   }else{
		   	cout << a[i][j] << " ";
		   }	
		}
		cout << endl;
	}
}

main (){
	int sobotest, i, j;
	int m, n;
	int a[100][100];
	int checkh[100] = {0}; 
	int checkc[100] = {0};
	cin >> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> m >> n;
		nhapmang(a,m,n,checkh, checkc);
		xuly(a,m,n,checkh, checkc);
	}
}
