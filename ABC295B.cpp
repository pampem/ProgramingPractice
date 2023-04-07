//AtCoder Today >> 230405
//B - Bombs

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int r,c;
  cin >> r >> c;

  vector<string> b(r);
  for(auto &x:b) cin >> x;

  rep(i,r){
    rep(j,c){
      if(b[i][j] != '.' && b[i][j] != '#'){
        
      }
    }
  }
  return 0;
}