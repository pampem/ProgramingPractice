//AtCoder Today >> 230510
//Educational DP Contest
//E - Knapsack 2

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

  rrep(i, 0, N+1) rrep(val, 0, N*1000+1) dp[i][val] = inf;
  dp[0][0] = 0;


  rrep(i, 0, N) rrep(val, 0, N*1000+1) {
      chmin(dp[i + 1][val], dp[i][val]);
      chmin(dp[i + 1][val + v[i]], dp[i][val] + w[i]);
  }
 
  int ans = 0;
  rrep(val, 0, N*1000 + 1) if(dp[N][val] <= W)
  chmax(ans, val);
  cout << ans << endl;
  return 0;
}