#include<iostream>
#include<math.h>

using namespace std;

int deu(int i){
	int j, check = 0;
	while(i > 0){
		j = i % 10;
		if(j % 2 == 0){
			check ++;
		}else{
			check --;
		}
		i /= 10;
	}
	if(check == 0){
		return 1;
	}else{
		return 0;
	}
}

main () {
	int n, k = 0, i;
	cin >> n;
	long  s = pow(10,n) ;
    for(i = pow(10,n - 1); i < s; i++){
    	if( deu(i) == 1){
    		cout << i << " ";
    		k ++;
		}
		if(k == 10){
			cout << endl;
			k = 0;
		}
	}	
}
