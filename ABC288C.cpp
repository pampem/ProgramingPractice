//AtCoder Today >> 230204
//C - Don’t be cycle
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//方針
//連結成分に分ける
//連結成分の数を数える
//連結成分の数-1を出力する

int main(){
  int N,M;
  cin >> N >> M;

  vector<vector<int>> G(N);
  rep(i,M){
    int a,b;
    cin >> a >> b;
    a--;b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  

  
  return 0;
}
