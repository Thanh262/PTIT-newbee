#include<iostream>

using namespace std;

main (){
	int sobotest, i, j, n;
	bool check[1000001];
	cin >> sobotest;
	check[i] = false;
	for(i = 2; i <= 1000000; i ++ ){
		check[i] = true;
	}
	for(i = 2; i <= 1000000; i ++ ){
		for(j = 2*i; j <=1000000; j += i){
			check[j] = false;
		}
		
	}
	for(i = 0; i < sobotest; i ++){
		cin >> n;
		for(j = 2; j*j <= n; j++ ){
			if(check[j] == true){
				cout << j*j << " ";
			}
		}
		cout << endl;
	}
}
