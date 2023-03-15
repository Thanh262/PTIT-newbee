#include<stdio.h>
#include<string.h>

int tim(char ds[][50],char s[], int n ){
	int i ;
	for(i = 0; i < n; i++){
		if(stricmp(ds[i], s) == 0){
			return i;
		}
	}
	return -1;
}

int demtu(char s[]){
	int  d = 0;
	char *l = strtok(s," ");
	while(l != NULL){
		d++;
		l = strtok(NULL," ");
	}
	return d;
}

main (){
     char s[1000], a[1000],ds[100][50], b[100] ;
     gets(s);
     strcpy(a,s);
     int j, n = 0, m = 0 ,t;
     int tu = demtu(s);
     char *p = strtok(a," ");
     while(n < tu){
     	 t= tim(ds,p,m);
     	 if(t == -1){
     	 	strcpy(ds[m], p);
     	 	b[m] = 1;
     	 	m++;
		  }else{
		  	b[t] ++;
		  }
		 p = strtok(NULL," ");
		 n++;
	 }
	 for(j = 0; j < m; j++){
	 	printf("%s %d\n",strlwr(ds[j]), b[j]);
	 }
}
