#include<iostream>
#include<iomanip>

using namespace std;

struct SinhVien{
	string ten, ngaysinh;
	float gpa;
	string lop;
};

void nhap(SinhVien &A){
	getline(cin, A.ten);
	getline(cin, A.lop);
	getline(cin, A.ngaysinh);
	cin >> A.gpa;
	if(A.ngaysinh[1] == '/'){
		A.ngaysinh.insert(0,"0"); 
	}
	if(A.ngaysinh[4] == '/'){
		A.ngaysinh.insert(3,"0"); 
	}
}

void in(SinhVien a){
	cout << "B20DCCN001" << "\t";
	cout << a.ten << "\t"; 
	cout << a.lop << "\t";
	cout << a.ngaysinh << "\t"; 
	cout << fixed << setprecision(2)<< a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
