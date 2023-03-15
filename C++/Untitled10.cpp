
#include<bits/stdc++.h>
using namespace std;
int MaHang=1;
struct HangHoa{
    int Ma;
    string Ten, Nhom;
    double Mua, Ban, LoiNhuan;
};

bool sapxep(HangHoa &A,HangHoa &B) {
    return A.LoiNhuan>B.LoiNhuan;
}

void in(HangHoa &A) {
    A.Ma=MaHang;
    MaHang+=1;
    getline(cin,A.Ten);
    getline(cin,A.Nhom);
    cin>>A.Mua>>A.Ban;
    cin.ignore();
    A.LoiNhuan=A.Ban-A.Mua;
}

void out(HangHoa &A) {
    cout<<A.Ma<<" "<<A.Ten<<" "<<A.Nhom<<" ";
    cout<<fixed<<setprecision(2)<<A.LoiNhuan<<endl;
}

int main() {
    int n;cin>>n;
    HangHoa *ds=new HangHoa[n];
    cin.ignore();
    for(int i=0;i<n;i++) {
        in(ds[i]);
    }
    sort(ds,ds+n,sapxep);
    for(int i=0;i<n;i++) {
        out(ds[i]);
    }
}
