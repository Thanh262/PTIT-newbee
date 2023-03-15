#include<iostream>
#include<cstring>

using namespace std;

main (){
	int sobotest, i, c;
	cin >> sobotest;
	string s;
	int j, si, kt;
	cin.ignore();
	while(sobotest--){
		getline(cin , s);
		si = s.size();
		kt = 1;
		for(j = 0; j < si; j++){
			if(s[j] == '1' || s[j] == '3' || s[j] == '5' || s[j] == '7' || s[j] == '9'){
				cout << "NO" ;
				kt = 0;
				break;
			}
		}
		j = 0;
		c = si - 1;
		if(kt == 1){
			while(j < si/2 && c >= si/2){
				if(s[j] != s[j]){
					cout << "NO";
					break;
				}
				j++;
				c--;
			}
			cout << "YES";
		}
		cout << endl;
	}
}
