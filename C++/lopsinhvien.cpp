#include<iostream>
#include<iomanip>

using namespace std;

class SinhVien {
	private:
		string hoten, lop, ngaysinh;
		float gpa;
	public:
	    void nhap(){
	    	getline(cin, hoten);
			getline(cin,lop);
			getline(cin, ngaysinh);
			if(ngaysinh[1] == '/'){
				ngaysinh.insert(0,"0");
			}
			if(ngaysinh[4] == '/'){
				ngaysinh.insert(3,"0"); 
			}
			cin >> gpa;
			cin.ignore(); 
		}	
		
		void xuat(){
			cout << "B20DCCN001" << " "<< hoten << " " << lop << " " 
			     << ngaysinh << " ";
			cout << fixed << setprecision(2) << gpa;     
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

