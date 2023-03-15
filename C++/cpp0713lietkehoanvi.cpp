#include<iostream>

using namespace std;

void set(int a[], int n){
	for(int i = 0; i < n; i++){
		a[i] = i + 1;
	}
}

void print(int a[], int n) {
    for (int i=0; i < n; i++) cout << a[i] ;
    cout << " ";
}

void permute(int a[], int n){
	int k;
	while(true){
		print(a,n);
		for(k = n-2; k >= 0; k--){
			if(a[k] < a[k+1]){
				break;
			}
		}
		if(k < 0){
			break;
		}
		int l;
		for(l = n-1; l > k; l--){
			if(a[k] < a[l]){
				break;
			}
		}
		swap(a[k], a[l]);
		for (int i=k+1, j=n-1; i<j; i++, j--) {
		    swap(a[i], a[j]); }
	}
}

main (){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		set(a, n);
		permute(a,n);
		cout << endl;
	}
}
