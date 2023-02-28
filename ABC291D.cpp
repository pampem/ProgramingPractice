//AtCoder Today >> 230226
//D - Flip Cards
//Real Time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main(){
  int n;
  cin >> n;

  vector<ll> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];

  vector<vector<ll>> dp(n, vector<ll>(2));
  dp[0][0] = dp[0][1] = 1;
  for(int i=1; i<n; i++){
    if(a[i] != a[i-1]) dp[i][0] += dp[i-1][0]%998244353;
    if(a[i] != b[i-1]) dp[i][0] += dp[i-1][1]%998244353;
    if(b[i] != a[i-1]) dp[i][1] += dp[i-1][0]%998244353;
    if(b[i] != b[i-1]) dp[i][1] += dp[i-1][1]%998244353;
  }
  ll ans = (dp[n-1][0]%998244353+dp[n-1][1]%998244353)%998244353;
  cout << ans << endl;
  return 0;
}

  // vector<pair<ll, ll>> pr(n);
  // rep(i,n){
  //   ll a,b;
  //   cin >> a >> b;
  //   pr[i].first = a;
  //   pr[i].second = b;
  // }

  //最初に選び方を2^N通りとする。そこから減点方式。
  //一個前と比べて、同じものがなければそのまま
  //同じものが一個あれば1引く
  //同じものが２個あれば2引く
  //同じもの2個が連続してあれば選び方は0通りになる。

//   ll ans = pow(2,n);
//   cout << ans << endl;

//   ll a,b;
//   cin >> a >> b;
//   rep(i,n-1){
//     ll ta, tb;
//     cin >> ta >> tb;
//     if(a==b && ta==tb){
//       cout << 0 << endl;
//       return 0;
//     }
//     if((a==ta || a==tb) && (b==ta || b==tb)){
//       ans /= 2;
//     }else if((a==ta || a==tb) || (b==ta || b==tb)){
//       ans -= 2;
//     }

//     a=ta;
//     b=tb;
//   }
//   cout << ans << endl;

//   return 0;
// }