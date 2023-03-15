#include<iostream>
#include<algorithm>

using namespace std;

struct SV{
	string masv;
	string hoten;
	string lop;
	float diemtbmthcs;
	float diemtbmcpp;
	
};

void nhap(SV &sv, int k){
	fflush(stdin);
	cout << "\nMa SV "<< k <<" : ";
	getline(cin, sv.masv);
	cout << "\nHo ten "<<k <<" : ";
	getline(cin, sv.hoten);
	cout << "\nLop sv "<< k<<" : "; 
	getline(cin, sv.lop);
	cout<<"\nDiemTrungbinhthcs sv "<<k<<" : ";
	cin >> sv.diemtbmthcs;
	cout <<"\nDiemCPP sv "<<k<<" : ";
	cin >> sv.diemtbmcpp;
}

void nhapn(SV sv[], int n){
	for(int i = 0; i < n; i++){
		nhap(sv[i], i+1);
		cout << "\n\nSinh vien tiep theo:" << "\n";
	}
}

void intheodiem(SV sv[], float diemcpp, int n ){
	for(int i =  0; i < n; i++){
	     if(sv[i].diemtbmcpp >= diemcpp){
	     	cout << "\n" << sv[i].hoten << " : " << sv[i].diemtbmcpp; 
		 }
	}
}

void in(SV sv){
	cout << "Ma sv:" << sv.masv<<endl;
	cout << "Ten sv:" << sv.hoten<<endl;
	cout << "Lop sv:" << sv.lop<<endl;
	cout << "DiemThcs sv:" << sv.diemtbmthcs<<endl;
	cout << "DiemCpp sv:" << sv.diemtbmcpp<<endl;
}

string getTen(string hoTen){
	return hoTen;
}

int sap_xep_ten(SV sv1, SV sv2){
	return getTen(sv1.hoten) < getTen(sv2.hoten); 
}

main (){
	int n;
	cout <<"So sinh vien trong lop: ";
	cin >> n;
	SV sv[n];
	nhapn(sv, n);
	float diemcpp;
	cout << "Diem01 Cpp cao hon : ";
	cin >> diemcpp;
	intheodiem(sv, diemcpp, n);
	sort(sv, sv+n, sap_xep_ten);
	for(int i = 0; i < n; i++){
		in(sv[i]);
	}
}
