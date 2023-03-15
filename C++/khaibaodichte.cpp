#include<iostream>

using namespace std;

main (){
	int m ,n;
	int i ,j;
	int s ,g1, g;
	int num = 0;
	cin >> m >> n;
	int** a;
	a = new int*[m];
	for(i = 0; i < m; i++){
		a[i] = new int [n];
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(i = 0; i < m ; i++){
		for(j = 0 ; j < n; j++){
			if(a[i][j] == -1){
				if(i == 0){
					s = 0;
				}else{
					s = i - 1; 
				}
			    if(j == 0){
			    	g1 = 0;
				}else{
					g1 = j - 1;
				}
				for(s;  (s <= i+1) && (s < m); s++){
					for(g = g1; (g <= j+1) && (g < n); g++){
						if(a[s][g] != -1){
						 num += a[s][g];
					    }
					}
				}
			}
		}
	}
	for(i = 0; i < m; i++){
		delete[] a[i];
	}
	delete[]a; 
	cout << num;
}
