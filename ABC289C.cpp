//AtCoder Today >> 230215
//C - Coverage

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n, m;
  //全探索をする。すべての集合の組み合わせを見て、それぞれに対して
  //それら集合の要素が全ての1<=i<=nを含むかどうかを調べる。

  cin >> n >> m;
  vector<vector<int>> a(m);
  rep(i,m){
    int c;
    cin >> c;
    a[i].resize(c);
    rep(j,c){
      cin >> a[i][j];
    }
  }

  //mbitのbit全探索をする。
  int ans = 0;
  for(int bit=0; bit < (1 << m); ++bit){
    set<int> s;
    rep(i,m){
      if((bit >> i) & 1){
        for(auto &x: a[i]){
          s.insert(x);
        }
      }
      
    }
    ans += (int)s.size() == n;
  }
  cout << ans << endl;

  return 0;
}