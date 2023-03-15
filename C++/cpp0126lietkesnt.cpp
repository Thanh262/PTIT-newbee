#include<iostream>

using namespace std;

bool check[10001];



main (){
	int sobotest, i, n, m;
	cin >> sobotest;
	for(int i = 2; i <= 10000; i++){
	   check[i] = true;
    }
    for (int i = 2; i <= 10000; i++) {
       if (check[i] == true) {
         for (int j = 2 * i; j <= 10000; j += i) {
             check[j] = false;
         }
       }
    }
   	for(i = 0; i < sobotest; i ++){
		cin >> m>> n;
		for(int i = m; i <= n; i ++){
        	if(check[i] == true){
         		cout << i << " ";
		    }
	    }
		cout << endl;
	}
}
