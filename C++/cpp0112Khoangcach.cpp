#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

main () {
	int sobotest, i ;
	double a,b,c,d,result;
	cin >> sobotest;
	for(i = 0; i < sobotest; i ++){
		cin >> a >> b >> c >> d;
		result = sqrt((a-c)*(a-c) + (b-d)*(b-d));
		cout << fixed << setprecision(4) << result << endl;
	}
}
