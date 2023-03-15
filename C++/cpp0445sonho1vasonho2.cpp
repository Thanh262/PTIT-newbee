#include<iostream>

using namespace std;

main (){
	int t, i, j;
	int n, min1, min2;
	cin >> t;
	while(t --){
		cin >> n;
		min1 = min2 = 10000001;
		int a[n];
		for(i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] < min1){
				min1 = a[i];
		    }
		}
		for(i = 0; i < n; i++){
			if(a[i] < min2 && a[i] > min1){
				min2 = a[i];
			}
		}
		if(min2 == 10000001){
			cout << -1 << endl;
		}else{
			cout << min1 << " " << min2 << " "<< endl;
		}
	}
}
