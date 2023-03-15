#include<iostream>

using namespace std;

class NhanVien {
	private:
	   string hoten, gioitinh;
	   string ngaysinh, diachi;
	   string masothue;
	   string ngaykihopdong;
	
	public:   
	void nhap(){
		getline(cin, hoten);
		cin >> gioitinh;
		cin >> ngaysinh;
	    cin.ignore();
		getline(cin, diachi);
		cin >> masothue;
		cin >> ngaykihopdong;
	}   
	
	void xuat(){
		cout << "00001" << " " << hoten << " " << gioitinh <<" "<< ngaysinh 
		     << " " << diachi 
		     << " " << masothue <<" " << ngaykihopdong;  
	}
	   
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}

