#include<iostream>
#include<algorithm>

using namespace std;

int test(int a){
	if(a == 1){
		return 0;
	}
	int kqua = 1;
	int b = sqrt(a);
	if(b*b != a){
	for(int i = 2; i <= b; i++){
		if(a % i == 0){
			kqua = kqua + i + (a/i);
		}
	}
    }
    else{
    	for(int i = 2; i < b; i++){
		if(a % i == 0){
			kqua = kqua + i;
		}}
		kqua += b;
	
	}
	cout << kqua <<" ";
	if(kqua > a){
		return 1;
	}else{
		return 0;
	}
}

main (){
    int x, y;
    int kqua1 = 0;
	cin >> x >> y;
	for(int j = x ; j <= y; j++){
		if( test(j) == 1){
			kqua1++;
		}
	} 
	cout << kqua1;
}
