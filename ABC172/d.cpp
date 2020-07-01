#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++)
        for(ll j = i; j <= n; j+=i) cnt += j;
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}
