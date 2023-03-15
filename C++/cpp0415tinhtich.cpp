#include<iostream>

using namespace std;

main (){
	int t, i, j;
	int n, m;
	cin >> t;
	long long result ;
	while(t--){
		cin >> n >> m;
		int a[n], b[m];
		long long max = -100000000;
		long long min = 100000000;
		for(i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max){
				max = a[i];
			}
		}
		for(i = 0; i < m; i++){
			cin >> b[i];
			if(b[i] < min){
				min = b[i];
			}
		}
		result = max*min;
		cout << result  <<endl;
	}
}
