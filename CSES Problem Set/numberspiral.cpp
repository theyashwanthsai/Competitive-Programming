#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    cin>>i>>j;

    if(i == j){
        cout<<(i*j - (i-1));
    }
    else if(i > j){
        if(i%2 == 0){
            cout<<(i*i - (i-1)) + (i-j);    
        }
        else{
            cout<<(i*i - (i-1)) - (i-j);
        }
        
    }
    else if(i < j){
        if(j%2 == 0){
            cout<<(j*j - (j-1)) - (j-i);    
        }
        else{
            cout<<(j*j - (j-1)) + (j-i);
        }
    }
}
    
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"\n";
    solve();
    
    }
}

