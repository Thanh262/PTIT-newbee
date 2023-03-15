#include<iostream>

using namespace std;

main (){
	int t, i, j;
	int n, x;
	cin >> t;
	while(t--){
		cin >> n;
		x = 0;
		int a[n];
		for( i = 0; i < n; i++){
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			for(j = i-1; j >= 0 ;j--){
				if(a[i] == a[j]){
					cout << a[i] ;
					x = 1;
					break;
				}
			}
			if(x == 1){
				break;
			}
		}
		if(x == 0){
			cout << -1 << endl;
		}else{
			cout << endl;
		}
	}
}
