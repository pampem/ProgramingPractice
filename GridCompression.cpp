#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> table(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    rep(j,W){
          cin >> table.at(i).at(j);
    }
  }

  rep(i,H){
    rep(j,W){
          if(table.at(i).at(j)/='.') break;
          if(j==W-1) cout<<"delete the row"<<endl;
    }
  }

  rep(j,W){
    rep(i,H){
          if(table.at(i).at(j)/='.') break;
          if(j==H-1) cout<<"delete the column"<<endl;
    }
  }
  return 0;


}
