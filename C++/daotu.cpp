#include<iostream>
#include<string>
using namespace std;
int main() {
    int loop;
    cin>>loop;
    cin.ignore();
    while(loop--) {
        string a;
        getline(cin,a);
        for(int i=a.rfind(' ')+1;i<a.length();i++) cout<<a[i];
        cout<<' ';
        int end=a.rfind(' ')-1;
        while(a.substr(0,end).rfind(' ')<a.length()&&end>0) {
            for(int i=a.substr(0,end).rfind(' ')+1;i<=a.substr(0,end).length();i++) cout<<a[i];
            cout<<' ';
            end=a.substr(0,end).rfind(' ')-1;
        }
        for(int i=0;i<a.find(' ');i++) cout<<a[i];
        cout<<endl;
    }
}
