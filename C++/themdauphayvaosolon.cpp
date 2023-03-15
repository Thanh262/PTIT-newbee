#include<stdio.h>
#include<string.h>

main (){
	char s[100], s2[100];
	gets(s);
	int n = strlen(s), i, j = 0, l = 0;
	int m = n / 3;
	if(n % 3 == 0 ){
		m = m - 1;
	}
	strrev(s);
	while(i < n ) {
		if(l != 3 ){
		   s2[j] = s[i];
		   j++;
		   l++;
		   i++;
		}else{
			l = 0;
			s2[j] = ',';
			j++;
		}
	}
	strrev(s2);
	puts(s2);
}
