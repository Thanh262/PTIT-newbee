#include<iostream>
#include<algorithm>
#include<limits>

using namespace std;

main (){
	int i, t, max = INT_MIN;
	cin >> t;
	int a[t];
	for(i = 0; i < t; i++){
		cin >> a[i];
	}
	sort(a, a+t);
	for(i = 0; i < t-2; i++){
		if(a[i] * a[i+1] > max){
			max = a[i] *a[i+1];
		}
	    if(a[i] * a[i+1] *a[i+2] > max){
			max = a[i] *a[i+1]  *a[i+2];
		}
	}
	cout << max;
}
