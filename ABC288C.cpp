//AtCoder Today >> 230204
//C - Don’t be cycle
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


vector<bool> seen;
vector<bool> finished;
int kaburi;

int dfs(const vector<vector<int>> &G, int v){
  visited[v] = true;
  for(auto next_v : G[v]){
    if(visited[next_v]){
      kaburi = next_v;
      return 1;
    }
    dfs(G, next_v);
  }
  return 0;
}

int main(){
  int N, M;
  cin >> N >> M;

  vector<vector<int>> G;
  rep(i, M){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  visited.assign(N, false);
  while(dfs(G, 0)){
    //削除処理を書く。
    G.erase(G.begin() + kaburi);
  }


  return 0;
}
