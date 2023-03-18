//AtCoder Today >> 230311
//D - Tying Rope

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,m;
  cin >> n >> m;
  
  vector<vector<int>> graph(n,vector<int>());
  vector<int> deg(n);

  rep(i,m){
    int a,c;
    char b,d;
    cin >> a >> b >> c >> d;
    a--; c--;
    graph[a].push_back(c);
    graph[c].push_back(a);
    deg[a]++; deg[c]++;
  }

  int x=0, y=0;
  vector<bool> used(n);
  rep(i,n){
    if(!used[i]){
      queue<int> que;
      used[i] = true;
      que.push(i);
      bool f=true;
      while(!que.empty()){
        int q = que.front(); que.pop();
        if(deg[q] != 2) f=false;
        for(int v:graph[q]){
          if(!used[v]){
            que.push(v);
            used[v] = true;
          }
        }
      }
      if(f) x++;
      else y++;
    }
  }
  cout << x << ' ' << y << endl;
  return 0;
}