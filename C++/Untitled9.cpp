
#include<bits/stdc++.h>
using namespace std;
int Ma=1;
struct SinhVien{
    string Ten, Lop;
    int d,m,y,MaSV;
    float GPA;
};
bool sortGPA(SinhVien &A,SinhVien &B){
    return A.GPA>B.GPA;
}
bool alphabet(char A){
    if(('a'<=A&&A<='z') || ('A'<=A&&A<='Z'))return true; else return false;
}

void ChuanHoaHoTen(string name){
    cout<<(char)toupper(name[0]);
    for(int i=1;i<name.length();i++){
        if(!alphabet(name[i])) continue;
        if(alphabet(name[i])&&!alphabet(name[i-1])){
            cout<<" "<<(char)toupper(name[i]);
            continue;
        }
        cout<<(char)tolower(name[i]);
    }
    cout<<" ";
}
void nhap(SinhVien ds[], int N){
    for(int i=0;i<N;i++){
        cin.ignore();
        ds[i].MaSV=Ma;
        Ma+=1;
        getline(cin,ds[i].Ten);
        getline(cin,ds[i].Lop);
        cin>>ds[i].d;getchar();cin>>ds[i].m;getchar();cin>>ds[i].y;
        cin>>ds[i].GPA;
    }
}
void sapxep(SinhVien ds[], int N){
    sort(ds,ds+N,sortGPA);
}
void in(SinhVien ds[], int N){
    for(int i=0;i<N;i++){
        cout<<"B20DCCN" << setw(3) << setfill('0') << ds[i].MaSV<<" ";
        ChuanHoaHoTen(ds[i].Ten);
        cout<<ds[i].Lop<<" ";
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
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

