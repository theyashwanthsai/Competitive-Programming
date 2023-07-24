#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, s = 0, d, k, l, m, n, h;
    cin>>n;
    long long sum = n*(n+1)/2;
    if(sum%2 != 0){
        cout<<"NO";
    }
    else{
        vector<int> a;
        vector<int> b;
        k = n;
        cout<<"YES"<<'\n';
        while(k > 0){
        
            if(s+k <= sum/2){
                a.emplace_back(k);
                s = s + k;
                k--;
            }
            else{
                b.emplace_back(k);
                k--;
            }
        }
        cout<<a.size()<<"\n";
        for(long long i = 0; i < a.size(); i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';

        cout<<b.size()<<"\n";
        for(long long i = 0; i < b.size(); i++){
            cout<<b[i]<<' ';
        }
    }
}
    
int main(){
    solve();
}

