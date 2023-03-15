#include<iostream>

using namespace std;

main (){
	int sobotest, i, j;
	cin >> sobotest;
	int n, m;
	while(sobotest--){
		int a[10] = {0,0,0,0,0,0,0,0,0,0};
		cin >> n;
		while(n--){
			cin >> m;
			if(m == 0){
				a[0] = 1;
			}
			while(m > 0){
				a[m%10] = 1;
				m /= 10;
			}
			
		}
		for(i = 0; i <= 9; i++){
			if(a[i] == 1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
