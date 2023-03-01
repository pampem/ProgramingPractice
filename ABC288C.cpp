//AtCoder Today >> 230204
//C - Don’t be cycle
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void dfs(int v, vector<vector<int>> &G, vector<bool> &seen){
  seen[v] = true;
  for(auto v2:G[v]){
    if(seen[v2])continue;
    dfs(v2,G,seen);
  }
  return;
}

int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  vector<bool> seen(N,false);
  
  rep(i,M){
    int a,b;
    cin >> a >> b;
    a--;b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int renketu = 0;

  rep(i,N){
    if(seen[i])continue;
    dfs(i,G,seen);
    renketu++;
  }

  int ans = M-N+renketu;
  cout << ans << endl;
  return 0;
}
