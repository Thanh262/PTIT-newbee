#include<iostream>

using namespace std;

main (){
	int t, i, j;
	cin >> t;
	int n;
	for(i = 0; i < t; i++){
		cin >> n;
		int a[n], b[n];
		for(j = 0; j < n; j++){
			cin >> a[j];
		}
		b[0] = a[0] * a[1];
		b[n-1] = a[n-1] * a[n-2];
		for(j = 1; j < n-1; j++){
			b[j] = a[j-1] *a[j+1];
		}
		for(j = 0; j < n; j++){
			cout << b[j] << " ";
		}
		cout << endl;
	}
}
