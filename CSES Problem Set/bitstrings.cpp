#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    cin>>n;
    long long ans = 1;
    for(int i = 0; i < n; i++){
        ans = ans*2;
        ans = ans%(1000000007);
    }
    cout<<ans;
}
    
int main(){
    solve();
}

