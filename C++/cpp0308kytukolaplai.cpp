#include<iostream>
#include<string>

using namespace std;

main (){
	int sobotest, si;
	int j, k;
	int dem;
	string s;
	cin >> sobotest;
	cin.ignore();
	while(sobotest--){
		getline(cin , s);
		si = s.length();
		for(j = 0; j < si; j ++){
			if(s[j] != '0'){
			   dem = 0;
			   for(k = j+1; k < si; k++ ){
			       if(s[j] == s[k]){
			        	s[k] = '0';
				        dem ++;
				   }
			   }
			    if(dem == 0){
				  cout << s[j];
			    }
		     }
		}
		cout << endl;
	}
}
