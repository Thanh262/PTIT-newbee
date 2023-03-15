#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

main(){
    int t, i;
    string s;
    int l, count;
    cin >> t;
    cin.ignore();
    while(t--){
    	getline(cin , s);
    	l = s.size();
    	count = 0;
    	for(i = 0; i < l; i++){
			 count ++;
			 if(s[i] != s[i+1]){
			 	cout << s[i] << count;
			 	count = 0;
			 }
		}
		cout << endl;
	}
}
