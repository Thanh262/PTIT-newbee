#include<bits/stdc++.h>
using namespace std;

#define a() a

int ig=0;
struct NhanVien{
    string hoten,gioitinh,ngaysinh,diachi,mathue,ngayki;
};
void nhap(NhanVien &a)
{
    if(ig==0){cin.ignore();ig=1;}
    getline(cin,a.hoten);
    getline(cin,a.gioitinh);
    getline(cin,a.ngaysinh);
    getline(cin,a.diachi);
    getline(cin,a.mathue);
    getline(cin,a.ngayki);
}
void inds(NhanVien ds[],int N) 
{
    for(int i=0;i<N;i++) {
        cout<<setw(5)<<setfill('0')<<i+1<<" ";
        cout<<ds[i].hoten<<" "<<ds[i].gioitinh<<" "<<ds[i].ngaysinh<<" "<<ds[i].diachi<<" "<<ds[i].mathue<<" "<<ds[i].ngayki<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

