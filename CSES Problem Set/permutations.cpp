#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    cin>>n;
    a = n;
    if(n > 3 || n == 1){
        
        b = n-1;
        while(b > 0){
            cout<<b<<" ";
            b = b -2;
        }
        while(a > 0){
            cout<<a<<" ";
            a = a -2;
        }
    }
    else{
        cout<<"NO SOLUTION";
    }
    
}
    
int main(){
    solve();
}