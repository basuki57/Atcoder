#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[200005], b[200005];
void solve(){
    ll n, m, t, cnt = 0;
    cin >> n >> m >> t;
    for(ll i = 1; i <= n; i++) cin >> a[i], a[i] += a[i-1];
    for(ll i = 1; i <= m; i++) cin >> b[i], b[i] += b[i-1];
    ll j = m;
    for(ll i = 0; i <= n; i++){
        ll f = 0;
        while(b[j] + a[i] > t){
            --j;
            if(j < 0) {f = 10; break;}
        }
        if(f) break;
        cnt = max(cnt, i + j);
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
