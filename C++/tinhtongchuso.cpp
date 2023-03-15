#include<iostream>
using namespace std;
main (){
	int sobotest,i,j;
	long a,b;
    cin >> sobotest;
    for(i = 0; i < sobotest; i++){
    	cin >> a;
    	while(a > 9){
		     b = 0;
			 while(a > 0){
    		    b += a%10;
    	      	a /= 10;
		     }
		     a = b;
		}
		cout << a << endl;
	}
}
