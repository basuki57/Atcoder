#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    char x;
    cin >> x;
    //cout << (x - 'a') << endl;
    if(x - 'A' < 26) cout << 'A' <<endl;
    else cout << 'a' << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
