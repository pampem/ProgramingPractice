//AtCoder Today >> 230201
//C - Count Connected Components

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n, m;
vector<int> visi;
vector<vector<int>> G;

void dfs(int c){
  visi[c]=true;
  for(auto &d:G[c]){
    if(visi[d])continue;
    dfs(d);
  }
}

int main(){
  cin >> n >> m;
  G.resize(n);
  rep(i, m){
    int u, v;
    cin >> u >> v;
    u--; v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  int ans=0;
  visi.resize(n);
  rep(i, n){
    if(!visi[i]){
      ans++;
      dfs(i);
    }
  }
  cout << ans << endl;


  return 0;
}
