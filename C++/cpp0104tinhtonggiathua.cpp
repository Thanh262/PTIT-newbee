#include<iostream>

using namespace std;

main (){
	int n,i;
	long long j = 1, kq = 0;
	cin >> n;
	for(i = 1; i<=n; i++ ){
		kq += i*j;
		j *= i;
	}
	cout<<kq;
}
