#include<iostream>

using namespace std;

main (){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int k, l;
		for(k = n-2; k >= 0; k--){
			if(a[k] > a[k+1]){
				break;
			}
		}
		
		for(l = n - 1; l > k; l--){
			if(a[k] > a[l]){
				break;
			}
		}
		swap(a[k], a[l]);
		for (int i=k+1, j=n-1; i<j; i++, j--) swap(a[i], a[j]);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
