#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a=0, b, c, d, i, j, k, l, m, n, h;
    cin>>n;
    for(i = 5; i <= n; i = i*5){
        a = a + n/i;
    }
    cout<<a;
}
    
int main(){
    solve();
}

