#include<bits/stdc++.h>
using namespace std;

#define a() a

bool alphabet(char a){
    return ('a'<=a&&a<='z')||('A'<=a&&a<='Z');
}

class SinhVien{
  public:
      string masv,hoten,lop;
      int d,m,y;
      float gpa;
  public:
      SinhVien(){
          masv="B20DCCN001";
          hoten="";
          lop="";
          d=0;m=0;y=0;gpa=0;
      }
  };
istream& operator >> (istream& in, SinhVien& a)
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
ostream& operator << (ostream& out, SinhVien& a)
{
    out<<a.masv;
    if(alphabet(a.hoten[0])){
        'A'<=a.hoten[0]&&a.hoten[0]<='Z'?out<<" "<<a.hoten[0]:out<<" "<<(char)(a.hoten[0]-32);
    }
    for(int i=1;i<a.hoten.length();i++){
        if((!alphabet(a.hoten[i-1]))&&alphabet(a.hoten[i])){
            'A'<=a.hoten[i]&&a.hoten[i]<='Z'?out<<" "<<a.hoten[i]:out<<" "<<(char)(a.hoten[i]-32);
            continue;
        }
        if(!alphabet(a.hoten[i])){
            continue;
        }
        'A'<=a.hoten[i]&&a.hoten[i]<='Z'?out<<(char)(a.hoten[i]+32):out<<a.hoten[i];
    }
    out<<" "<<a.lop<<" ";
    if(a.d<10)out<<0<<a.d<<"/"; else out<<a.d<<"/";
    if(a.m<10)out<<0<<a.m<<"/"; else out<<a.m<<"/";
    if(a.y<10)out<<0<<a.y<<" "; else out<<a.y<<" ";
    out<< fixed << setprecision(2) << a.gpa;
    return out;
}

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}

