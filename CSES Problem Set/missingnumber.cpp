#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';
#define fo(i, k, n) for(int i = k; i < n; i++);


void solve(){
    long long b, c, d, k, l, m, n, h;
    cin>>n;
    long long tsum = n*(n+1)/2;
    long long sum = 0;
    for(long long i = 0; i < n-1; i++){
        long long j;
        cin>>j;
        sum = sum + j;
    }
    cout<< (tsum-sum);
       
}
    
int main(){
    // int t;
    // cin >> t;
    // while(t--){
    solve();
    // }
}

