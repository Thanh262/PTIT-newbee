#include<iostream>
#include<cstring>

using namespace std;

main (){
	string s;
	getline(cin, s);
	int l = s.size();
	for(int i = 0; i < l; i++){
		s[i] = tolower(s[i]);
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ){
			continue;
		}else{
			cout << "." << s[i];
		}
	}
}
