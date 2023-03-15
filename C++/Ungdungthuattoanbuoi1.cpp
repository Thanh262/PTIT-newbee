/***********************
	Name: Num.CPP
	Copyright: (C) 2021
	Author: DevC Fan
	Date: 11/10/21 20:38
	Description: 
	Some algorithms on intergers
	Actions, Complexity;
	
	Slogan 1: Encapsulate
	Slogan 2: IBM Clean Room   Ky nghe Phong sach
	     a) An empty program is a clean room   
	     b) 11: 1 lenh/  1 lan den het loi
	Slogan 3: Atom chia nho doi tuong / View     
	S4: Bam sat cung tien  Per coaching
	S5: Dat ten de de goi
	S6: Reusing ====== Tai su dung
	S7: Tim cach test all case
	S8: tong quat thi de hon cu the
	S9: Delete // tam che
	
	nxhuy564@gmail.com  Phan hoi
	
	     
***********************/

#include <iostream> // vao ra
// #include <fstream>  vao ra file
// #include < >

using namespace std;

typedef long long Long;
string digits =  "0123456789abcdefghijklmnopqrstuvwxyz";

/*-----------------------
    lat 1 so nguyen
    Rev(1024)  = 4201
    Rev(2000) = 2;
    [1][2][3][4] -> [4][3][2][1]
    Rule: Lay phai ghep phai
    Lay hang don / ghep vao hang don
-----------------------*/
Long Rev(Long x, int base ){
	Long y = 0;
	while(x!=0){
	    y = y*base + (x%base);
	    x /= base ;
    }
	return y;
}

/*-------------
Palindrome / sodoixung / so ganh / so can
trai = phai
1003001

-------------*/
bool Pal(Long x){
	return x == Rev(x,10)  ;
}

/*-------------
Palindrome / sodoixung / so ganh / so can
trai = phai
1003001

-------------*/
bool BiPal(Long x){
	return x == Rev(x,10) && x == Rev(x,2) ;
}

/*-----------
Liet ke cac so Pal  1...n
--------------*/
void AllPal(Long n){
	int c = 0;
	for(Long x= 1; x <= n; x++){
		if(Pal(x)){
			cout << "\n" << x;
			++c;
		}
	}
	cout << "\n Total: "<< c << "number(s)";
}

/*-----------
Liet ke cac so Pal  1...n
--------------*/
void AllBiPal(Long n){
	int c = 0;
	for(Long x= 1; x <= n; x++){
		if(BiPal(x)){
			cout << "\n" << x << " : " << Rev(x,2);
			++c;
		}
	}
	cout << "\n Total: "<< c << "number(s)";
}

// 123 -> "123'
// IntToStr(33,2) -> "100001"
// [1][2][3][4] ->  4 3 2 1  
string IntToStr(Long x, int base){
	string s = "";
	while(x != 0){
	    s = digits[x % base]+ s;
	    x /= base ;
    } 
}


/*-------------
So doi sung he dem a, b
33 = 1000001;
--------------*/

void Test(){
	AllBiPal(20000);
}

main (){
    Test();
	cout << "\n T H E   E N D" ;	
	return 0;
}
