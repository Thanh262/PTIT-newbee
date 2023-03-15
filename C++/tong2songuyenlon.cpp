#include<stdio.h>
#include<string.h>

void cong(char s1[],int n, char s2[], int m){
    int a[n], b[m], c[n];
    int i, l = 0 ;
    strrev(s1);
    strrev(s2);
    for(i = 0; i < n;i++){
    	a[i] = s1[i] - '0';
	}
     for(i = 0; i < m;i++){
    	b[i] = s2[i] - '0';
	}
	for(i = 0; i < n; i++){
		c[i] = (a[i] +b[i] + l) % 10;
		if(a[i] + b[i] >= 10){
			l = 1;
		}else{
			l = 0;
		}
	}
	while(i < n){
		if(l = 1){
			c[i] = (a[i] + l)%10;
		}if(a[i] + l == 10 ){
			l = 1;
		}else{
			l = 0;
		}
		i++;
	}
	if(a[i-1] + l == 10){
		c[i] = 1;
		n++;
	}
	for(i = n-1; i>=0; i--){
		printf("%d",c[i]);
	}
}

main (){
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	int n = strlen(s1);
	int m = strlen(s2);
	//cho str1 dai hon str 2
	if(n < m){
		char s[100];
		strcpy(s,s1);
		strcpy(s1,s2);
		strcpy(s2,s);
	}
	n = strlen(s1);
	m = strlen(s2);
	cong(s1,n,s2,m);
}
