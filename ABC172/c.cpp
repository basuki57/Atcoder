#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[200005], b[200005];
void solve(){
    ll n, m, t, cnt = 0;
    cin >> n >> m >> t;
    for(ll i = 0; i < n; i++) cin >> a[i], a[i] += a[i-1];
    for(ll i = 0; i < m; i++) cin >> b[i], b[i] += b[i-1];
    for(ll i = 0; i < n; i++){
        ll x = t - a[i];
        ll y = upper_bound(b, b+m, x) - b;
        ll xx = (x >= 0 ? i+1:0);
        ll yy = (y > 0 ? y:0);
        cnt = max(cnt, xx+ yy);
    }
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
