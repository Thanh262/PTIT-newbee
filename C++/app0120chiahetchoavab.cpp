#include<iostream>

using namespace std;

main (){
	int t, i, dem;
	int m, n, a, b;
	cin >> t;
	while(t--){
		cin >> m >> n >> a >> b;
		dem = 0;
		for(i = m; i <= n; i++){
			if(i % a == 0 && i % b == 0){
				dem ++;
				continue;
			}
			if(i % a == 0){
				dem ++;
			}
			if(i % b == 0){
			    dem ++;
			}
		}
		cout << dem << endl;
	}
}
