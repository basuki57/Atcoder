#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, q;
    cin >> n;
    ll a[n], cnt = 0;
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) cin >> a[i], cnt += a[i], mp[a[i]]++;
    cin >> q;
    while(q--){
        ll x, y;
        cin >> x >> y;
        cnt += (-x*mp[x] + y*mp[x]);
        mp[y] += mp[x];
        mp[x] = 0;
        cout << cnt << endl;
    }
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
