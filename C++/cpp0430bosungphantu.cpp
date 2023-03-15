#include<iostream>
#include<algorithm>

using namespace std;

main(){
    int t, i ,j;
    int n, dem;
    cin >> t;
    while(t--){
    	cin >> n;
    	dem = 0;
    	int a[n];
    	for(i = 0; i < n; i++){
    		cin >> a[i];
		}
		sort(a, a+n);
		for(i = 0; i < n-1; i++){
			if(a[i+1] - a[i] > 1){
				dem += a[i+1] - a[i] - 1;
			}
		}
		cout << dem << endl;
	}
}

