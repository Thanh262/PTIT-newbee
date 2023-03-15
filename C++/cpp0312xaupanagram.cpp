#include<iostream>
#include<cstring>

using namespace std;

main (){
	int t, i, j;
	int l, k, n;
	int count;
	string s;
	cin >> t;
	cin.ignore();
	while(t--){
		getline(cin, s);
		cin >> k;
		cin.ignore();
		l = s.size();
		n = 0;
		if(l<26){
			cout << 0 << endl;
			continue;
		}else{
			for(i = 0; i < l; i++){
				count = 0;
				for(j = 0; j < i; j++){
					if(s[i] == s[j]){
						count = 1;
						break;
					}
				}
				if(count == 0){
					n++;
				}
				if(n + k == 26){
					cout << 1 << endl;
					break;
				}
			}
			if(n + k < 26){
				cout << 0 << endl;
			}
		}
	}
}
