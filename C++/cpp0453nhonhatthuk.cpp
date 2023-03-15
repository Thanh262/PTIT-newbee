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
        sort(a, a+n);
	    for(i = 0; i < k; i++){
	    	if(i+1 == k){
			     cout << a[i] << endl;
			     break;
		    }
		}		
	}
}

