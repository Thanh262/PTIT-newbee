#include <iostream>

using namespace std;

void print(int &n) {
    int k = 0;
	for (int i = 4001 ; i < 5000; i+= 2) {
    	if(i % 5 != 0 && i % 15 != 0){
		   cout << i << " ";
    	   k++;
    	   n++;
        }
    	   if(k == 10){
    	    	k = 0;
    	 	    cout << endl;
		   }
	}
    
}

main (){
	int n = 0;
	cout << 400 << endl;
	print(n);
	cout <<endl<< n ;
}
