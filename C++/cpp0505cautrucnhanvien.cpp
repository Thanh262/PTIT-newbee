#include<iostream>
#include<iomanip>

using namespace std;

struct NhanVien{
	string ten, ngaysinh;
	string gioitinh, diachi, mathue;
	string hopdong;
};

void nhap(NhanVien &A){
	getline(cin, A.ten);
	getline(cin, A.gioitinh);
	getline(cin, A.ngaysinh);
	getline(cin, A.diachi);
    getline(cin, A.mathue);
    getline(cin, A.hopdong);
}

void in(NhanVien a){
	cout << "00001" <<" ";
	cout << a.ten << " "<< a.gioitinh << " " << a.ngaysinh << " "; 
	cout << a.diachi << " " << a.mathue << " " << a.hopdong;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
