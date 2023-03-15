#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main (){
	int t, tongle, tongchan;
    int i, j;
	string s; 
	cin >> t;
	cin.ignore();
	while(t--){
		getline(cin, s);
	    i = 0 ;
		j = 1 ;
		tongle = 0;
		tongchan = 0;
		while(i < s.size()){
			tongle += s[i] - 48;
			i+= 2;
		} 
		while(j < s.size()){
			tongchan+= s[j] - 48;
			j+=2;
		}
		if( (tongle - tongchan) % 11 == 0 ){
			cout << 1 << endl;
		}else{
			cout << 0 << endl;
		}
	}
	
}
