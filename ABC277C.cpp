//ABC unrated today >> 221112
//B - Playing Cards Validation

#include<bits/stdc++.h>
using namespace std;

vector<bool> seen;

void dfs(vector<vector<int>> &g, int &ans, int v){
  seen[v] = true;

  for(auto next_v : g[v]){
    if(seen[next_v]) continue;
    if(ans < next_v) ans = next_v;
    dfs(g, ans, next_v);
  }
}

int main(){

  int N;
  cin >> N;

  vector<vector<int>> g(N, vector<int>(2));

  for(int i=0; i<N; i++){
    int A, B;
    cin >> A >> B;
    g[A].push_back(B);
    g[B].push_back(A);
  }
  int ans=1;

  seen.assign(N, false);
  dfs(g,ans, 1);
  cout << ans << endl;

  return 0;


}
