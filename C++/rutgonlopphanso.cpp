#include<iostream>

using namespace std;

class PhanSo{
	private:
		long long tuso, mauso;
	public:
	    PhanSo(int x, int y){
	    	this->tuso = x;
	    	this->mauso = y;
		}	
		friend istream& operator>>(istream &is, PhanSo &p){
			return is >> p.tuso >> p.mauso;
		}
		friend ostream& operator<<(ostream &os, PhanSo &p){
			return os << p.tuso <<"/"<< p.mauso;
		}
		void rutgon(){
			long long a = tuso;
			long long b = mauso; 
			while(a * b != 0){
				if(a > b){
					a %= b;
				}else{
					b %= a;
				}
			}
			this->mauso /= (a+b);
			this->tuso /= (a+b);
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

