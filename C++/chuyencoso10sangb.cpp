#include<stdio.h>
#include<string.h>

const char x[] ={'0','1','2','3','4','5','6','7','8','9',
                  'A','B','C','D','E','F','J','H','I',
				  'J','K','L','M','N','O','P','Q','R','S',
				  'T','U','V','W','X','Y','Z'};

main () {
	int sobotest, k, b, i , temp;
	char s[100];
	scanf("%d",&sobotest);
	while(sobotest --){
		scanf("%d%d", &k, &b);
		i = 0;
		while(k != 0){
			temp = k % b;
			s[i++] = x[temp];
			 k /= b;
		}
		s[i] ='\0';
	    strrev(s);
	 	puts(s);
	}	
	
}				  
