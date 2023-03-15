#include<iostream>

using namespace std;

main (){
	int t, i;
	int n, x, dem;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n];
		dem = 0;
		for(i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x){
				dem ++;
			}
		}
		if(dem == 0){
			cout << -1 << endl;
		}else{
			cout << dem << endl;
		}
	}
}
