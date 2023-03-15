#include<iostream>
#include<fstream>

using namespace std;

class student{
	private:
		string name;
		double diem;
		double rank;
	public:
		void laythongtin(){
			cout << "\nTen: ";
			getline(cin, name);
			cout << "Diem: ";
			cin >> diem ;
			cout << "Rank: ";
			cin >> rank;
			cin.ignore();
		}
		void xuat(){
			cout <<"\nTen: " << name <<"\nDiem: " << diem << "\nRank: " << rank;
		}
};

main (){
	student s[3];
	s[0].laythongtin();
	s[1].laythongtin();
	s[2].laythongtin();
	ofstream file;
	file.open("Bang-diem-so.txt", ios::trunc | ios:: out );
	for(int i = 0; i <= 2; i++){
		file.write((char*) &s[i], sizeof(s[i]));
	}
	file.close();
	ifstream file1;
	file1.open("Bang-diem-so.txt", ios::in);
	student a;
	for(int i = 0; i <= 2; i++){
		file1.read((char*)&a, sizeof(a));
		a.xuat();
	}
	file1.close();
}
