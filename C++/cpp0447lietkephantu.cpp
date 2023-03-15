#include<iostream>
#include<algorithm>

using namespace std;

main (){
	int t, i, j;
    int n, k;
    cin >> t;
    while(t--){
    	cin >> n >> k;
    	int a[n];
    	for(i = 0; i < n; i++){
    		cin >> a[i];
		}
        sort(a, a+n, greater<int>());
	    for(i = 0; i < k; i++){
	    	cout << a[i] << " ";
		}		
		cout << endl; 
	}
}
