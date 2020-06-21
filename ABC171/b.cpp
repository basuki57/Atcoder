#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll cnt = 0;
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(ll i = 0; i < k; i++) cnt+=a[i];
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
