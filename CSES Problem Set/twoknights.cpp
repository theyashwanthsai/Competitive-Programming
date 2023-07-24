#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    cin>>k;
    // a = k;
    for(a = 1; a <= k; a++){
        cout<<((a*a)*(a*a-1)/2 - 4*(a-1)*(a-2))<<"\n";
    }
}
    
int main(){
    solve();
}

