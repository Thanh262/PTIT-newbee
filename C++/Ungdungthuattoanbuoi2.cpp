/*
	Name: 
	Copyright: 
	Author: Lecture 
	Date: 14/10/21 19:34
	Description: 
	Recursive, Divide and Conquer  / chia va tri
	R(x)  R(Y)  size(y)  != size(z)
	R1. Finish
	R2. R(x)  <-- R(y)
	Numbers,   Greedy
	
	
*/

#include<iostream>

using namespace std;

typedef long long Long;  // 64 bit

/************************************************************************************
Long Fac(int n) {  //   n!  =1.2.3......n
       Long r  = 1;
       for(int i = 2 ; i <= n; i++){
       	r *= i;
	   }
       return r;
}

Long RFac(int n) {  //   n!  =1.2.3......n
	   return (n < 0) ? 0  
	         : ((n<2) ? 1 : RFac(n-1)*n); 
}

void TestFac(int n){
	for(int x = 1; x <=  n; x++){
	cout << "Factorial of "<< x << " = " << Fac(x) << " : " << RFac(x)<< endl;;
     }
}

// Def fib(0) = Fib(1) = 1,   Fib(n) = Fib(n-2) + Fib(n-1)
// 1,1,2,3,5,8,13,21, ......

Long Fib(int n) { // san duoi
	if(n < 0){
		return 0;
	}
	if(n < 2){
		return 1;
	}
	Long a = 1,  b = 1, c;
	for(int i =  2; i <=n; i++){
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}

Long RFib(int n) {
	return (n < 0) ? 0 
	       : (n < 2) ? 1 
		   :  (RFib(n-2) + RFib(n-1));
}

void Test(int n){
	for(int x = 1; x <=  n; x++){
	cout << "\nFactorial of "<< x << " = " << Fac(x) << " : " << RFac(x)<< endl;;
     }
}

void TestFib(int n){
	for(int x = 1; x <=  n; x++){
	cout << "\n Fib of "<< x << " = " << Fib(x) << " : " << RFib(x)<< endl;;
     }
}
 ************************************************************************************/
 
 
/********************************************************************************* 
int a[1000] = {7,9,-12,71,80,13,28,-1,9,12};
 
void Go() {
	cout << " ? ";
	fflush(stdin);   // buffer
	if(cin.get() == '.') exit(0);
}
 
void Print(int a[], int d, int c, const char * msg = ""){
       cout << msg;
	   for(int i = d; i <= c; i++){
	   	cout << " " << a[i];
	   } 	
}
 
//  nen quy uoc khac biet ve ten ham so vs c++. VD: MyClose
int MinIndex(int a[], int d, int c){
	if(c==d) return d;
	int m = (d+c) / 2; // middle
	int i1 = MinIndex(a,d,m);
	int i2 = MinIndex(a,m+1,c);
	return (a[i1] < a[i2]) ? i1 : i2;
} 

//Inf Noi dung,  dia chi
// O Nguyen Trai co cua hang Pho cuc chat
// Den 120 NGuyen Trai co 1 Surprise
 
void Test(int v) {
	int n = 10;
	Print(a, 0, n-1, "\n Given a:") ;
	for(int d = v; d <= n; d++){
		int m = MinIndex(a,d,n-1);
	   cout <<"\n MinIndex " << d << " : "
	        << n - 1<<" = "  << m
			<< " has val = " << a[m];
	   Go();
	}
} 
 *************************************************************************************/
void Go() {
	cout << " ? ";
	fflush(stdin);   // buffer
	if(cin.get() == '.') exit(0);
}

int SecretNum(int a, int b, string ask = "Your number >"){
	int m ;
	char ch;
	int q = 0;
	while(a<b){
	    m = (a+b) / 2;
	    ++q;
		do{
		    cout << q <<". "<< ask << m << " [Y/N]:  ";
	        fflush(stdin);
	        ch = toupper(cin.get());
	    }while(ch != 'Y' && ch != 'N');
	    if(ch == 'Y' ) a = m + 1;
	    else b = m;
    }
    cout << "\n I've found' " << a << endl;
    return a;
}

// ko qua 9 cau YN doan sinh nhat
// n = 365, Log(365) = 9

void Birthday(){
     int month = SecretNum(1,12, " *Your born month > "); 
	 int day = SecretNum(1,31, " ***Your born day > ");	
	 cout << "\n Your Birthday is " << day << " / "<< month;
}

void Test(){
	Birthday(); // 8/3
}

main (){
    Test();
	return 0;
}
