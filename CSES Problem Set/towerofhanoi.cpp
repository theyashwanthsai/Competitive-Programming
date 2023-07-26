#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';

void hanoi(int n, int src, int temp, int dest){
    if(n == 1){
        cout<<src<<" "<<dest<<'\n';
        return;
    }
    hanoi(n-1, src, dest, temp);
    cout<<src<<" "<<dest<<'\n';
    hanoi(n-1, temp, src, dest);
}

void solve(){
    long long a, b, c, d, i, j, k, l, m, n, h;
    cin>>n;
    cout<<(1<<n) -1<<'\n';
    hanoi(n, 1, 2, 3);
}
    
int main(){
    solve();
}

