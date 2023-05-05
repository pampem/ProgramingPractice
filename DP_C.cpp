//AtCoder Today >> 230418
//Educational DP Contest
//C - Vacation

//DPまとめコンテスト。

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int inf = INT_MAX / 2;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
  int n;
  cin >> n;

  vector<vector<int>> A(n);
  vector<vector<int>> dp(n+1,vector<int>(3));

  for(int i=0; i<n; i++){
    int in;
    rep(j,3){
      cin >> in;
      A[i].push_back(in);
    }
  }
  
  rep(i,3) dp[1][i] = A[0][i];

  for(int i=1; i<n; i++){
    rep(lst,3){
      rep(nxt, 3){
        if (lst != nxt) chmax(dp[i + 1][nxt], 
        dp[i][lst] + A[i][nxt]);
      }
    }
  }

  int ans = 0;
    rep(lst, 3) chmax(ans, dp[n][lst]);
    cout << ans << endl;

  return 0;
}