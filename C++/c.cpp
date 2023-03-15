#include<stdio.h>

void xuly(int n){
	int dem = 1, i, j, a[100][100];
	for(i = 0; i < n; i++){
		for(j = i; j < n - i; j++){
		     a[i][j] = dem ++;
		}
		for(j = i + 1; j < n - i; j++ ){
			a[j][n - i - 1] = dem++;
		}
		for(j = n - i - 2; j >= i; j-- ){
			a[ n - i - 1][j] = dem++;
		}
		for(j = n - i - 2; j > i; j-- ){
			a[j][i] = dem++;
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n ; j++){
           printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

main (){
	int n;
	scanf("%d", &n);
	xuly(n);
}
