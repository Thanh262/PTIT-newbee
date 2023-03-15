#include<iostream>

using namespace std;

main (){
    int sobotest, i, j, n, m;
	bool check[1000001];
	int k ;
	cin >> sobotest;
	check[1] = false;
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
		k = 0;
		for(j = 2; j <= n; j++ ){
			m = n - j;
			if(check[j] == true && check[m] == true){
				cout << j << " " << m;
				k = 1;
				break;
			}
		}
		if(k == 0){
			cout<< -1;
		}
		cout << endl;
	}
}
