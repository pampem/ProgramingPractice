//AtCoder Today >> 230311
//C - Make Takahashi Happy

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void dfs(int v, vector<vector<int>> &G, vector<bool> &seen, bool &jisuuhantei, vector<int> &deg){
  seen[v] = true;
  for(auto v2:G[v]){
    if(deg[v2] != 2) jisuuhantei = false;
    if(seen[v2])continue;
    dfs(v2,G,seen,jisuuhantei,deg);
  }
  return;
}

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> graph(n, vector<int> ());
  vector<bool> seen(n,false);
  vector<int> deg(n); //頂点の次数を見る変数

  rep(i,m){
    int a, c;
    char b, d;
    cin >> a >> b >> c >> d;
    a--;c--;
    graph[a].push_back(c);
    graph[c].push_back(a);
    deg[a]++; deg[c]++;
  }

  int cicle = 0, line = 0;
  rep(i,n){
    bool jisuuhantei = true;
    if(seen[i])continue;
    dfs(i,graph,seen,jisuuhantei,deg);
    if(jisuuhantei) cicle++;
    else line++;
  }

  cout << cicle << ' ' << line << endl;

  return 0;
}