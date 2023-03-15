#include<iostream>
#include<iomanip>

using namespace std;

main (){
	int s;
	float i, kq = 0;
	cin>>s;
	for(i = 1; i <= s; i++){
		kq += 1/i;
	}
	cout<< kq;
}
