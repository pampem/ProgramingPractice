#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> result(N, vector<char>(N,'-'));
  int win,lose;
  rep(i,M){
    A.at(i)--;
    B.at(i)--;
    win=A.at(i);
    lose=B.at(i);
    result.at(win).at(lose) = 'o';
    result.at(lose).at(win) = 'x';
  }

  rep(i,N){
    rep(j,N){
      cout<<result.at(i).at(j);
      if(j==N-1){cout<<endl;}else{cout<<' ';};

    }
  }

}
