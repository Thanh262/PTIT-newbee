#include<iostream>
#include<algorithm>

using namespace std;

main (){
	int t, i, j;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int a[n];
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		j = n/2;
		for(i = 0; i < j; i++){
			cout << a[n-1-i] << " " << a[i] << " ";
		}
		if(n%2!=0){
			cout << a[j];
		}
		cout << endl;
	}
}
