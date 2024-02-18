#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " " << x <<'\n';
#define fo(i, k, n) for(int i = k; i < n; i++);

int lowerBound(vector<int> arr, int n, int x) {
	int l = 0;
	int r = n-1;
	int ans = n;
	while(l <= r){
		int m = l + (r-l)/2;
		if(arr[m] >= x){
			ans = m;
			r = m-1;
		}
		if(arr[m] < x){
			l = m+1;
		}
	}
	return ans;
}

int upperBound(vector<int> &arr, int x, int n){
	int ans = n;
	int r = n-1;
	int l = 0;
	while(l <= r){
		int m = l + (r-l)/2;
		if(arr[m] == x){
			l = m+1;
		}
		if(arr[m] > x){
			ans = m;
			r = m-1;
		}
		if(arr[m] < x){
			l = m+1;
		}
	}
}

void solve(){
  int a, b, c, d, i, j, k, l, m, n, h;

}
    
int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
