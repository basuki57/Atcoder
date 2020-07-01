#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool prime[10000007], primesquare[n * n + 1]; 
ll a[10000007];

void SieveOfEratosthenes(ll n, bool prime[], 
                         bool primesquare[], ll a[]) 
{ 
    for (ll i = 2; i <= n; i++) 
        prime[i] = true; 
    for (ll i = 0; i <= (n * n + 1); i++) 
        primesquare[i] = false; 
    prime[1] = false; 
    for (ll p = 2; p * p <= n; p++) { 
        if (prime[p] == true) { 
            for (ll i = p * 2; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    ll j = 0; 
    for (ll p = 2; p <= n; p++) { 
        if (prime[p]) { 
            a[j] = p; 
            primesquare[p * p] = true; 
            j++; 
        } 
    } 
} 
  
ll countDivisors(ll n) 
{ 
    if (n == 1)   return 1; 
  
    ll ans = 1; 
    for (ll i = 0;; i++) { 
        if (a[i] * a[i] * a[i] > n)  break; 
        ll cnt = 1; // cnt is power of prime a[i] in n. 
        while (n % a[i] == 0) // if a[i] is a factor of n 
        { 
            n = n / a[i]; 
            cnt = cnt + 1; // incrementing power 
        } 
        ans = ans * cnt; 
    } 
    if (prime[n])     ans = ans * 2; 
    else if (primesquare[n])    ans = ans * 3; 
    else if (n != 1)    ans = ans * 4; 
  
    return ans; // Total divisors 
} 
void solve(){
    SieveOfEratosthenes(10000007); 
    ll n, cnt = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++) cnt += i*countDivisors(i);
    cout << cnt << endl;

}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}
