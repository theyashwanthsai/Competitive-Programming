#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';
#define fo(i, k, n) for(int i = k; i < n; i++);


void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    cin>>n;
    cout<<n<<" ";
    while(n > 1){
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = n*3 + 1;
        }
        cout<<n<<" ";
    }
}
    
int main(){
    // int t;
    // cin >> t;
    // while(t--){
    solve();
    // }
}

