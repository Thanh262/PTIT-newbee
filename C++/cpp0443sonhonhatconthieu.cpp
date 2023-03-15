#include<iostream>

using namespace std;

main (){
	int t, i, j;
	cin >> t;
	int n, min;
	for(i = 0; i < t; i++){
		cin >> n;
		int a[n];
		for(j = 0; j < n; j++){
			cin >> a[j];
			if(a[j] != j + 1){
				min = j+1;
				break;
			}
		}
		while(a[j] < n){
			j++;
			cin >> a[j];
		}
		cout << min << endl;
	}
}
