#include <iostream>

using namespace std;

struct PhanSo {
	long long tu,mau;
};

void nhap(PhanSo &s){
	cin >> s.tu >> s.mau;
}

void rutgon(PhanSo &p){
	long long tu = p.tu;
	long long mau = p.mau;
	while(tu * mau != 0){
		if( tu > mau){
			tu %= mau;
		}else{
			mau %= tu;
		}
	}
	p.tu = p.tu / (mau + tu);
	p.mau = p.mau / (tu + mau);
}

PhanSo tong(PhanSo &p, PhanSo &q){
	rutgon(p);
	rutgon(q);
	PhanSo pq;
	if(p.mau == q.mau){
		pq.tu = p.tu + q.tu;
		pq.mau = p.mau;
	}else{
		pq.mau = p.mau * q.mau;
		pq.tu = (p.tu *q.mau) + (q.tu*p.mau);
	}
	rutgon(pq);
	return pq;
}

void in(PhanSo p){
	cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

