//AtCoder Today >> 230505
//Educational DP Contest
//D - Knapsack 1

//DPまとめコンテスト。

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i,j,n) for (int i = j; i < (int)(n); i++)
#define ll long long

const int inf = INT_MAX / 2;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N, W, w[101], v[101];
ll dp[101][201010];

int main(){
  cin >> N >> W;

  rep(i, N) cin >> w[i] >> v[i];
 
  rrep(i, 0, N) rrep(tot, 0, W) {
      chmax(dp[i + 1][tot], dp[i][tot]);
      chmax(dp[i + 1][tot + w[i]], dp[i][tot] + v[i]);
  }
 
  ll ans = 0;
  rrep(tot, 0, W + 1) chmax(ans, dp[N][tot]);
  cout << ans << endl;
  return 0;
}