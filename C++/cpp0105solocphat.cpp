#include<iostream>

using namespace std;

int locphat(int s){
	while (s > 0){
		if(s % 10 == 0){
			s /= 10;
		}else if(s % 10 == 8){
			s /= 10;
		}else if(s % 10 == 6){
			s /= 10;
		}else {
			return 0;
		} 
	}
	return 1;
}

main () {
	int sobotest, i, s;
	cin >> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> s;
		if(locphat(s)){
			cout << "YES"<<endl;
		}else{
			cout << "NO" <<endl;
		}
	}
	
}
