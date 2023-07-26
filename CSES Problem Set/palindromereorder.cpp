#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';


void solve(){
    long long a, b, c, d, i, k, l, m, n, h, oddnum = 0;
    string s;
    cin>>s;
    // char odd = ' ';

    unordered_map<char, long long> hmap;
    for(i = 0; i < s.length(); i++){
        hmap[s[i]]++;
    }

    for(auto j: hmap){
        if(j.second%2 != 0){
            oddnum++;
            // odd =j.first;
        }
    }

    if(oddnum > 1 || s.length()%2 == 0 && oddnum == 1){
        cout<<"NO SOLUTION";
    }
    else{
        string first = "";
        string second = "";
        string oddchar = "";

        for(auto j: hmap){
            if(j.second%2 == 0){
                string schar(j.second/2, j.first);
                first = first + schar;
                second = second + schar;
            }
            else{
                oddchar = string(j.second, j.first);
            }
        }
        reverse(second.begin(), second.end()); 
        cout<<first + oddchar + second;




    }






}
    
int main(){
    solve();
}

