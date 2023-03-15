#include<iostream>
#include<algorithm>

using namespace std;

main (){
	int t, i, j;
	int n, m, s;
	cin >> t;
	while(t--){
		cin >> n >> m;
		s = n+m;
		int a[s];
		for(i = 0; i < s; i++){
			cin >> a[i];
		}
		sort(a, a+s);
		for(i = 0; i < s; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
