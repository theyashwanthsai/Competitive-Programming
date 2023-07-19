#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long  b = 0, c, d, i, k, l, m, n, h;
    cin >> n;
    vector<long long> a;
    a.emplace_back(0);
    for(i = 0; i < n; i++){
        long long j;
        cin>>j;
        if(a.back() > j){
            b = b + (a.back() -j);
            j = j + (a.back() -j);
        }
        
        a.emplace_back(j);

    }
    cout<<b;
}
    
int main(){
    solve();
}

