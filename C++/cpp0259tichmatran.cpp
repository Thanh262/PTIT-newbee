#include<iostream>

using namespace std;

main (){
	int n, m, p;
	cin >> n >> m >> p;
	int a[n][m];
	int b[m][p];
	int c[n][p];
	int i, j, k;
	for(i = 0; i < n; i++){
		for(j = 0; j < p; j++){
	       c[i][j] = 0;
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < p; j++){
			cin >> b[i][j];
		}
	}
	for(i = 0; i < n; i++){
		for(k = 0; k < p; k++){
			for(j = 0; j < m; j++){
			   c[i][k] += a[i][j] * b[j][k];
		    }
	    }
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < p; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
