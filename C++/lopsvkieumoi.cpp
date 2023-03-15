#include<bits/stdc++.h>
using namespace std;

#define a() a

class SinhVien{
    public:
        string masv,hoten,lop;
        int d,m,y;
        float gpa;
    public:
        SinhVien() {
            masv="B20DCCN001";
            hoten="";
            lop="";
            d=0;m=0;y=0;gpa=0;
        }
};
istream& operator >> (istream& in,SinhVien& a)
{
    getline(in,a.hoten);
    getline(in,a.lop);
    in>>a.d;
    getchar();
    in>>a.m;
    getchar();
    in>>a.y;
    in>>a.gpa;
    return in;
} 
ostream& operator << (ostream& out,SinhVien& a)
{
    out<<a.masv<<" "<<a.hoten<<" "<<a.lop<<" ";
    if(a.d<10)out<<0<<a.d<<"/";else out<<a.d<<"/";
    if(a.m<10)out<<0<<a.m<<"/";else out<<a.m<<"/";
    if(a.y<10)out<<0<<a.y<<" ";else out<<a.y<<" ";
    out<<fixed<<setprecision(2)<<a.gpa;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

