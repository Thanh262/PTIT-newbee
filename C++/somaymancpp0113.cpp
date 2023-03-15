#include<iostream>

using namespace std;

main (){
	int sobotest,i,a;
	cin >> sobotest;
	for(i = 0; i < sobotest; i++){
		cin >> a;
		if(a % 10 == 6){
			a/= 10;
			if(a%10==8){
				cout<<1<<endl;
			}else{
				cout<<0<<endl;
			}
		}else{
			cout<<0<<endl;
		}
	}
}
