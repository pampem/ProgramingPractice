//ABC unrated today >> 221112


#include<bits/stdc++.h>
using namespace std;


int main(){

  int N;
  cin >> N;

  map<int, vector<int>> graph;

  for(int i=0; i<N; i++){
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  queue<int> que;
  que.push(1);
  set<int> S;
  S.insert(1);

  while(!que.empty()){
    int v = que.front();
    que.pop(); //queの要素を一つ減らす。Frontの要素を消す。
    for(int i:graph[v]){
      if(!S.count(i)){
        que.push(i);
        S.insert(i);
      }
    }
  }
  cout << *S.rbegin() << '\n'; //setはソートされているから、最後の要素を取り出すだけで、一番高い階の値を取り出せる。

  return 0;


}
