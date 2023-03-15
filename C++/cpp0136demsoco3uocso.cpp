#include<iostream>
#include<cmath>

using namespace std;

main (){
	int sobotest, dem;
	int i, j, m;
	long int n;
	bool check[1000001];
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
		m = sqrt(n);
		dem = 0;
		for(j = 2; j <= m; j++ ){
			if(check[j] == true){
				dem ++;
			}
		}
		cout << dem << endl;
	}
}

