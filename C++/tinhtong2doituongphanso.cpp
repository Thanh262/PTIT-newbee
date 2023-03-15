#include<bits/stdc++.h>
using namespace std;

class PhanSo{
    public:
        unsigned long long int tu,mau;
    public:
        PhanSo(unsigned long long int t=0,unsigned long long int m=0){
            tu=t;
            mau=m;
        }

        void rutgon(){
            unsigned long long int gcd=__gcd(tu,mau);
            tu/=gcd;
            mau/=gcd;
        }

        friend istream& operator >> (istream& in, PhanSo& p);
        friend ostream& operator << (ostream& out, PhanSo& p);
        friend PhanSo operator + (PhanSo const &, PhanSo const &);
};
istream& operator >>(istream& in, PhanSo& p)
{
    in >> p.tu>>p.mau;
    return in;
};
ostream& operator << (ostream& out,PhanSo &p)
{
    out<<p.tu<<"/"<<p.mau;
    return out;
};
PhanSo& operator + (PhanSo &p1, PhanSo &p2)
{
    p1.tu=p1.tu*p2.mau+p2.tu*p1.mau;
    p1.mau=p1.mau*p2.mau;
    p1.rutgon();
    return p1;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
