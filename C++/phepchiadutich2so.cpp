#include<iostream>
#include<algorithm>
using namespace std;

long long pow(long long a,long long b,long long c) {
    if(b==0) return 0;
    if(b%2==0) {
        return 2*pow(a,b/2,c)%c;
    } else {
        return (2*pow(a,b/2,c) %c+a%c)%c;
    }
}

int main() {
    int loop;
    cin>>loop;
    while(loop--) {
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<pow(a,b,c) <<endl;
    }
}

