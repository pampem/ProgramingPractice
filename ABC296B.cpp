//AtCoder Today >> 230405
//B - Chessboard

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  vector<string> s(8);
  rep(i,8){
    cin >> s[i];
  }

  rep(i,8){
    rep(j,8){
      if(s[i][j] == '*'){
        cout << (char)('a' + j) << 8-i << endl;
        return 0;
      }
    }
  }
  return 0;
}