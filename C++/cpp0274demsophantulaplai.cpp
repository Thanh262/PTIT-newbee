#include <bits/stdc++.h>

using namespace std;

void nhapmang(int a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void swap(int &a, int &b) { 
    int t = a; 
     a = b; 
     b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void lechnhonhat(int a[], int n){
	int min = a[1] - a[0];
	for(int i = 0; i < n - 1 ; i++){
		if(a[i+1] - a[i] < min){
			min = a[i+1] - a[i];		} 
	}
	cout << min;
}

main (){
	int sobotest, i, n;
	cin >> sobotest;
	int *a = new int [100000];
	for(i = 0; i < sobotest; i++){
		cin >> n;
		nhapmang(a, n);
		quickSort(a, 0, n - 1);
		lechnhonhat(a, n);
		cout << endl;
	}
}
