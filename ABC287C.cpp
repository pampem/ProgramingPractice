//AtCoder Today >> 230221
//C - Path Graph?

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> g(n);

  rep(i,m){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  if(m!=n-1){ //辺の数がn-1でないならNo
    cout << "No" << endl;
    return 0;
  }

  //頂点の次数が2以下
  rep(i,n){
    if(g[i].size()>2){
      cout << "No" << endl;
      return 0;
    }
  }

  //DFSでグラフの連結性を確認
  vector<bool> seen(n,false);
  stack<int> st;
  st.push(0);
  seen[0]=true;
  while(!st.empty()){
    int v=st.top();
    st.pop();
    for(int nv:g[v]){
      if(seen[nv])continue;
      seen[nv]=true;
      st.push(nv);
    }
  }
  
  //未探索の頂点があればNo
  rep(i,n){
    if(!seen[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  
  cout << "Yes" << endl;
  return 0;
}