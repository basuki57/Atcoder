#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fact[2000010], inv[2000010], mod = 1e9 + 7;

ll fexpo(ll x, ll y){
    ll ret = 1;
    while(y){
        if(y&1) ret = (ret*x)%mod;
        y/=2;
        x = (x*x)%mod;
    }
    return ret;
}

void fac(){
    fact[0] = 1;
    for(ll i = 1; i < 2000010; i++) fact[i] = i*fact[i-1]%mod;
    inv[2000009] = fexpo(fact[2000009], mod - 2);
    for(ll i = 2000008; i >= 0; i--) inv[i] = (i+1)*inv[i+1]%mod;
}

ll ncr(ll x, ll y){
    if(y > x) return 0;
    ll cnt = fact[x]*inv[x-y]%mod*inv[y]%mod;
    return cnt;
}

void solve(){
    ll k, n;
    string s;
    cin >> k >> s;
    n = s.length();
    ll cnt = 0;
    for(ll i = 0; i <= k; i++) {
        cnt += fexpo(26, i)*fexpo(25, k - i)%mod*ncr(k - i + n - 1, n-1)%mod;
    }
    cout<< cnt%mod << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  fac();
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
