//AtCoder Today >> 230614
//C - Snuke the Cookie Picker

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  //U: クッキーが置かれている行の最小値
  //D: クッキーが置かれている行の最大値
  //L: クッキーが置かれている列の最小値
  //R: クッキーが置かれている列の最大値

  //U, D, L, Rを求める。
  int U=H, D=0, L=W, R=0;
  rep(i, H) rep(j, W) {
    if(S[i][j]=='#'){
      if(i<U) U=i;
      if(i>D) D=i;
      if(j<L) L=j;
      if(j>R) R=j;
    }
  }

  for(int i=U; i<=D; i++){
    for(int j=L; j<=R; j++){
      if(S[i][j] == '.') cout << i+1 << " " << j+1 << endl;
    }
  }

  // //#が縦横2マス以上の部分長方形状にならんでおり、そこから1つのみが.に変わっている。
  // //その位置を出力する。

  // //全探索？
  // //a<=i<=b, c<=j<=dを満たさない場所には#が一つもない。
  // //そういう条件の、最小面積のものを見つける。
  // //面積S=(b-a)*(d-c)

  // //1<=a<b<=H, 1<=c<d<=W
  // //a,b,c,dを全探索する。

  // int s = INT_MAX/2;
  // vector<int> pos(4);

  // rep(a, H) rep(b, H) rep(c, W) rep(d, W) {
  //   if(b<=a || d<=c) continue;
  //   int cnt = 0;
  //   rep(i, H) rep(j, W) {
  //     if((i<a || i>b) || (j<c || j>d))
  //     if(S[i][j]=='#') cnt++;
  //   }
  //   int stmp = (b-a)*(d-c);
  //   if(cnt==0 && stmp<s){
  //     s=stmp;
  //     pos={a,b,c,d};
  //   }
  // }
  // //posを出力
  // // rep(i,4)cout << pos[i] << " ";
  // // cout << endl;

  // //ここまでで部分長方形のposが求まった。
  // //あとは、その中で#が一つだけ.になっているところを探す。
  // //その位置を出力する。

  // vector<int> ans(2);
  // rep(i, H) rep(j, W) {
  //   if(pos[0]<=i && i<=pos[1] && pos[2]<=j && j<=pos[3] && S[i][j]=='.'){
  //     ans={++i,++j};
  //     break;
  //   };
  // }

  // cout << ans[0] << " " << ans[1] << endl;

  return 0;
}