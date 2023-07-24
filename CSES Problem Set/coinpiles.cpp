#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    cin>>a>>b;
    if((a+b)%3 != 0 || max(a,b) > 2*min(a,b)){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
}
    
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    
}

