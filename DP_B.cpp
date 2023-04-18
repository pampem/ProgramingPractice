//AtCoder Today >> 230418
//Educational DP Contest
//B - Frog 2

//DPまとめコンテスト。

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int inf = INT_MAX / 2;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
  int n, k;
  cin >> n >> k;

  vector<int> h(n);
  for(auto &x:h) cin >> x;

  vector<int> dp(n,inf);
  dp[0] = 0;

  rep(i,n){
    for(int j=1; j<(k+1); j++){
      if(i+j<n) chmin(dp[i+j], dp[i]+abs(h[i]-h[i+j]));
    }
  }

  cout << dp[n-1] << endl;

  return 0;
}