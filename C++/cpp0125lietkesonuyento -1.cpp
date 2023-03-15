#include<iostream>

using namespace std;

main (){
	long int m, i, j, n;
	bool check[1000001];
	check[1] = false;
	for(i = 2; i <= 1000000; i ++ ){
		check[i] = true;
	}
	for(i = 2; i <= 1000000; i ++ ){
		for(j = 2*i; j <=1000000; j += i){
			check[j] = false;
		}
		
	}
	cin >> m >> n;
	if( m > n){
		long step = m;
		     m = n; 
		    n = step;
	}
	for(j = m; j <= n; j++ ){
			if(check[j] == true){
				cout << j<< " ";
			}
   }
}
