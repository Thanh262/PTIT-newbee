#include<bits/stdc++.h>   //to hop chap k

using namespace std;

int n,k,a[100];

void in(){
    int i;
    for(i=1;i<=k;i++){
        cout << a[i] <<" ";
    }
    cout << endl;
}

void solve(int i){
    int j;
    for(j=a[i-1]+1 ; j<=n-k+i ; j++){
        a[i]=j;
        if(i==k) in();
        else solve(i+1);
    }
}

int main(){
    cin >> k >> n;
    solve(1);
    
}
 
 
 #include<bits/stdc++.h>  //sinh hoan vi n phan tu
#define max 20

using namespace std;

int n;
int b[max]={0};
int a[max];

void in(){
    int i;
    for(i=1;i<=n;i++){
        cout <<a[i] <<" ";
    }
    cout << endl;
}

void Try(int k){
    int i;
    for(i=1;i<=n;i++){
        if(!b[i]){
            a[k]=i;
            b[i]=1;
            if(k==n) in();
            else Try(k+1);
            b[i]=0;
        }
    }
}

int main(){
    cin >> n;
    Try(1);
}



#include<bits/stdc++.h>   //bai k va n

using namespace std;

int n,k;
vector<int>a;
bool check = true;

void In(){
    cin >> k >> n;
    for(int i=1; i<=n;i++){
        a.push_back(0);
    }
}

void Out(){
    int cnt=0;
    int x=k;
    for(int i=0; i<=a.size()-k;i++){
        int mum = i;
        int cnt2=0;
        while(x--){
            if(a[mum]==0){
                break;
            }
            mum++;
            cnt2++;
        }
        if(cnt2==k) cnt++;
        x=k;
    }
    if(cnt == 1){
        for(int i=0;i<a.size();i++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}

void Handle(){
    int k=n-1;
    while(k>=0){
        if(a[k]==0){
            a[k]=1;
            break;
        }
        else{
            a[k]=0;
            k--;
        }
    }
    if(k<0){
        check = false;
    }
}

void solve(){
    while(check == true){
        Out();
        Handle();
    }
    a.clear();
    check = true;
}

int main(){
    In();
    solve();
    return 0;
}

#include<bits/stdc++.h> bai k m n

using namespace std;

int k,m,n;
vector<int>a;
bool check = true;

void In(){
    cin >> k >> m >> n;
    for(int i=1;i<=n;i++){
        a.push_back(0);
    }
}

void Out(){
    int cnt=0;
    int x=k;
    int y=m;
    for(int i=0;i<=a.size()-k;i++){
        int mum=i;
        int cnt2=0;
        while(x--){
            if(a[mum]==1){
                break;
            }
            mum++;
            cnt2++;
        }
        if(cnt2==k){
            cnt++;
        }
        x=k;
}
    int cnt3=0;
    for(int i=0;i<=a.size()-m;i++){
        int mum=i;
        int cnt2=0;
        while(y--){
            if(a[mum]==0){
                break;
            }
            mum++;
            cnt2++;
        }
        if(cnt2==m) cnt3++;
        y=m;
    }
    if(cnt==1 && cnt3==1){
        for(int i=0;i<a.size();i++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}

void handle(){
    int k =n-1;
    while(k>=0){
        if(a[k]==0){
            a[k]=1;
            break;
        }
        else{
            a[k]=0;
            k--;
        }
    }
    if(k<0){
        check = false;
    }
}

void solve(){
    while(check == true){
        Out();
        handle();
    }
    a.clear();
    check = true;
}

int main(){
    In();
    solve();
    return 0;
}
