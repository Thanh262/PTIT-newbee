#include<iostream>

using namespace std;

main (){
	int sobotest, i;
	char a;
	cin>>sobotest;
	for(i = 0; i < sobotest; i++){
		cin>>a;
		if(islower(a)){
			cout<< (char)toupper(a);
		}else{
			cout<< (char)tolower(a);
		}
		cout<<endl;
	}
}
