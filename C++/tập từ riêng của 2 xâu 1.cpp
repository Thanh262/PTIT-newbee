#include<stdio.h>
#include<string.h>

void swap(char s[], char l[]){
	char c[50];
	strcpy(c,s);
	strcpy(s,l);
	strcpy(l,c);
}

void sapxeptang(char ds[][50], int n){
	int i,j ;
	for(j = 0; j < n - 1; j++){
	   for(i = j + 1; i < n; i++){
		   if(strcmp(ds[i],ds[i+1]) > 0){
		   	swap(ds[i], ds[i+1]);
		    }
		}
	}
}

void timvadanhdau(char ds1[],char ds2[],int b[]){
	int i = 0;
	char *p = strtok(ds1," ");
	while(p != NULL){
		if(strcmp(p,ds2) == 0){
			b[i] = -1;
		}else{
			b[i] = 1;
		}
		i++;
		p = strtok(NULL," ");
	}
}

int demtu(char ds[]){
	int d = 0;
	char* l = strtok(ds," ");
	while(l != NULL){
		d++;
		l = strtok(NULL," ");
	}
	return d;
}

main (){
	char ds1[1000], ds2[1000], ds3[100][50];
	gets(ds1);
	gets(ds2);
	int tuds1 = demtu(ds1);
	int tuds2 = demtu(ds2);
	int i,j = 0,b[tuds1], m = 0;
	for(i = 0; i < tuds2; i++){
			char * h=strtok(ds2," ");
			timvadanhdau(ds1,h,b);
	}
	char *v = strtok(ds1," ");
	for(i = 0; i < tuds1; i ++){
		if(b[i] != -1 ){
		  strcpy(ds3[m],v);
		  m++;
		  v = strtok(NULL," "); 
		}
	}
	for(i = 0; i<m; i++){
		printf("%s\n", ds3[i]);
	}
}
