//AtCoder Today >> 230311
//C - Make Takahashi Happy

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  //方針 - 制約ちっちゃいから全探索いけるだろぼけ

  int h, w;
  cin >> h >> w;

  vector<vector<int>> g(h);
  rep(i,h){
    rep(j,w){
      int tmp;
      cin >> tmp;
      g[i].push_back(tmp);
    }
  }
  //下に行くのがh-1回、右に行くのがw-1回
  //この順番を変える、全探索を行えば良い。
  //next_permutationを使う。1-下　0-右とする。

  vector<int> perm(h+w-2,1);
  for(int i=0; i< w-1; i++){
    perm[i] = 0;
  }

  //setで重複管理
  //最終的にsetのサイズが足りなければ嬉しくならない。
  int ans=0;

  do{
    set<int> st;
    int cph=0,cpw=0;//current place
    st.emplace(g[cph][cpw]);

    for(int i=0; i<h+w-2; i++){
      if(perm[i]%2){
        cph++; //1なので下に行った。
      }else{
        cpw++; //0なので右に行った。  
      }
      st.emplace(g[cph][cpw]);
    }

    if((int)st.size()==h+w-1){
      ans++;
    }

  }while(next_permutation(perm.begin(), perm.end()));

  cout << ans << endl;

  
  return 0;
}