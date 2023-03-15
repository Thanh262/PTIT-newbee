#include<stdio.h>
#include<string.h>

int tim(char p[], char ds[][50], int n){
	for(int i = 0; i < n; i++){
		if(stricmp(ds[i],p) == 0){
			return i;
		}
	}
	return -1;
}

main (){
	char s1[1000], ds1[100][50];
	gets(s1);
	char *p = strtok(s1," ");
	int t, n = 0, b[100];
	while(p != NULL){
		t = tim(p,ds1,n);
	    if( t == -1){
	    	strcpy(ds1[n],p);
	    	b[n] = 1;
	    	n++;
		}else{
			b[t] ++;
			strcpy(ds1[n], p);
			b[n] = -1;
			n++;
		}	
		p = strtok(NULL," ");
	}
	for(int i = 0; i < n; i ++){
		if(b[i] != -1){
			printf("%s %d\n", ds1[i], b[i]);
		}
	}
}
