#include<iostream>

using namespace std;

void nhapmang(int a[][100], int n){
	int i, j ;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
}

void inmangconran(int a[][100], int n){
	int i, j;
    for(i = 0; i < n; i++){
    	if(i % 2 == 0){
    		for(j = 0; j < n; j++){
    			cout << a[i][j]<< " ";
			}
		}else if(i % 2 == 1){
			for(j = n - 1; j >= 0; j--){
				cout << a[i][j] << " ";
			}
		}
	}
}

/*void inmang(int a[][100], int n){
	int i, j ;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
	}
}
*/
main (){
	int sobotest, i, j, n;
	int a[100][100];
	cin >> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> n;
		nhapmang(a,n);
		inmangconran(a,n);
		cout << endl;
	}
}
