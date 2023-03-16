//AtCoder Today >> 230309
//Educational DP Contest
//A - Frog 1

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

  vector<int> h(n);
  for(auto &x:h) cin >> x;

  vector<int> dp;

  rep(i,n){
    dp.push_back(inf);
  }

  dp[0] = 0;

  rep(i,n){
    chmin(dp[i+1], dp[i] + abs(h[i]-h[i+1]));
    chmin(dp[i+2], dp[i] + abs(h[i]-h[i+2]));
  }

  cout << dp[n-1] << endl;

  return 0;
}