#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }
  int count = 0;
  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  rep(i,N){
    rep(j,N){
      if(A.at(i)+P.at(j) == S){
        count++;
      }
    }
  }
  cout<<count<<endl;
  return 0;

}
