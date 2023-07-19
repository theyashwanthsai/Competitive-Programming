#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    string s;
    cin>>s;
    i = 0;
    j = 0;
    a = 0;
    long long mx = INT_MIN;
    while(j < s.length()){
        if(s[i] == s[j]){
            a++;
            j++;
            mx = max(mx, a);
        }
        else{
            i = j;
            a = 0;
        }
    }
    cout<<mx;
}
    
int main(){
    solve();
}