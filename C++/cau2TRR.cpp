#include <iostream>

using namespace std;

void print(int a[], int n) {
    for (int i=0; i < n; i++) cout << a[i] ;
    cout << " ";
}

void permute(int a[], int n, int &kk) {
    while (true) {
        print(a, n);
        kk++;
        int k, l;
        for (k = n-2; k >= 0; k--) if (a[k] < a[k+1]) break; 
        if (k<0) break;                                    
        for (l = n-1; l > k; l--) if (a[k] < a[l]) break; 
	        swap(a[k], a[l]); 
        for (int i=k+1, j=n-1; i<j; i++, j--) swap(a[i], a[j]); 
    }
}

int main() {
    int a[] = {1, 0, 5, 8, 9};
    int kk = 0;
    cout << (4*4*3*2) << endl;
	permute(a, 5 ,kk);
	cout << endl << kk << endl;
    return 0;
}
