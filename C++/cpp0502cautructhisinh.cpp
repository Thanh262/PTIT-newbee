#include<iostream>
#include<iomanip>

using namespace std;

struct ThiSinh{
	string ten, ngaysinh;
	float mon1, mon2, mon3;
	float tongdiem = mon1 + mon2 + mon3;
};

void nhap(ThiSinh &A){
	getline(cin, A.ten);
	getline(cin, A.ngaysinh);
	cin >> A.mon1 >> A.mon2 >> A.mon3;
	A.tongdiem = A.mon1 + A.mon2 + A.mon3;
}

void in(ThiSinh a){
	cout << a.ten << " " << a.ngaysinh << " "; 
	cout << fixed << setprecision(1)<< a.tongdiem;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
