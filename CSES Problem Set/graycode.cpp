#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    int a, b, c, d, k, l, m, h;
    int n;


    // debug(2);


    cin>>n;


    // debug(3);


    vector<string> s;



    // debug(4);
    s.emplace_back("");





    for(int i = 0; i < n; i++){


        int size = s.size();


        for(int j = size-1; j >= 0; j--){
            s.emplace_back(s[j]);
        }



        size = size*2;

        for(int j = 0; j < size; j++){
            if(j < s.size()/2){
                s[j] = s[j] + "0";
            }
            else{
                s[j] = s[j] + "1";
            }
            
        }
    }

    for(int i = 0; i < s.size(); i++){
        cout<<s[i]<<"\n";
    }

}
    
int main(){
    solve();
}

