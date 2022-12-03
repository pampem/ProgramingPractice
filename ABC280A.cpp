//AtCoder Today >> 1203
//A -pawn on a grid
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int H, W;
  cin >> H >> W;

  string S;
  int cnt=0;
  for(int i=0; i<H; i++){
    cin >> S;
    rep(j,W){
      if(S[j] == '#'){
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  
  return 0;
}
