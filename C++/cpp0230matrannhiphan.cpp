#include<iostream>

using namespace std;

void nhapmang(int a[][3], int n){
	int i, j ;
	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
}

void xuly(int a[][3], int n){
	int i, j, dem;
	int result = 0;
	for(i = 0; i < n; i++){
		dem = 0;
		for(j = 0; j < 3; j++){
		   if(a[i][j] == 1){
		   	dem ++;
		   }else{
		   	dem --;
		   }
		}
		if(dem > 0){
		    result ++;
	    }
	}
	cout << result << endl;
}

main (){
	int sobotest, i, j, n;
	int a[1000][3];
	cin >> n;
	nhapmang(a,n);
	xuly(a,n);
	}

