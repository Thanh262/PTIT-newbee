#include<iostream>
#include<iomanip>

using namespace std;

char d1[] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char d2[] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

main () {
	int sobotest, i, a, j;
	char s;
	float result = 0;
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++) {
		result = 0;
		cin >> a;
		if(a == 101){
			for(j = 0; j < 15; j ++){
				cin >> s;
				if(s == d1[j]){
					result ++;
				}
			}
		}else if(a == 102){
			for(j = 0; j < 15; j++){
				cin >> s;
				if(s == d2[j]){
					result ++;
				}
			}
		}
		result = result/15*10;
		cout << fixed << setprecision(2) <<result << endl;
	}
}
