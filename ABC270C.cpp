//AtCoder Today >> 1201
//C - Simple path

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<vector<int>> e(200010);
vector<bool> flag(200010);
deque<int> deq;
bool stop;

void dfs(int k, int to){
  if(!stop) deq.push_back(k);
  if(k == to) stop = true;
  flag.at(k) = true;
  int sz = e.at(k).size();
  for(int i=0; i<sz; i++){
    if(!flag.at(e[k][i])) dfs(e.at(k).at(i), to);
  }
  if(!stop) deq.pop_back();
  return;
}

int main(){
  int N, X, Y;
  int u, v;
  cin >> N >> X >> Y;
  for(int i=0; i<N-1; i++){
    cin >> u >> v;
    e.at(u).push_back(v);
    e.at(v).push_back(u);
  }

  for(int i=1; i<= N; i++) flag[i] = false;
  stop = false;

  dfs(X, Y);

  while(!deq.empty()){
    cout << deq.front();
    deq.pop_front();
    if(deq.empty())cout << endl;
    else cout << " ";
  }


  return 0;
}
