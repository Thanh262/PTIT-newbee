
#include<bits/stdc++.h>
using namespace std;
int Increase=1;
struct SinhVien{
    int MaSV,d,m,y;
    string HoTen,Lop;
    float GPA;
};
void nhap(SinhVien ds[],int N) {
    for(int i=0;i<N;i++) {
        cin.ignore();
        ds[i].MaSV=Increase;
        Increase+=1;
        getline(cin,ds[i].HoTen);
        getline(cin,ds[i].Lop);
        cin>>ds[i].d;getchar();cin>>ds[i].m;getchar();cin>>ds[i].y;
        cin>>ds[i].GPA;
    }
}
void in(SinhVien ds[], int N) {
    for(int i=0;i<N;i++) {
        cout<<"B20DCCN"<<setw(3)<<setfill('0')<<ds[i].MaSV<<" "
            <<ds[i].HoTen<<" "<<ds[i].Lop<<" ";
        ds[i].d<10?cout<<0<<ds[i].d<<"/":cout<<ds[i].d<<"/";
        ds[i].m<10?cout<<0<<ds[i].m<<"/":cout<<ds[i].m<<"/";
        ds[i].y<10?cout<<0<<ds[i].y<<" ":cout<<ds[i].y<<" ";
        cout<<fixed<<setprecision(2)<<ds[i].GPA<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
