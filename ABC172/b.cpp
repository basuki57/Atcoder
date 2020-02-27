#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string s, t;
    cin >> s >> t;
    ll cnt = 0;
    for(ll i = 0; i < s.length(); i++) s[i]!= t[i] ? ++cnt:0;
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
