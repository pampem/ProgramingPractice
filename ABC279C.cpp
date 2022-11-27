//AtCoder Contest real time!
//Today >> 1126
//C - RANDOM

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int H,W;
  cin >> H >> W;

  vector<string> S(H);
  vector<string> T(H);
  rep(i,H){
    cin >> S[i];
  }
  rep(i,H){
    cin >> T[i];
  }

  vector<string> St(W);
  vector<string> Tt(W);
  rep(i,H){
    rep(j,W){
      St[j].push_back(S[i][j]);
      Tt[j].push_back(T[i][j]);
    }
  }

    sort(St.begin(), St.end());
    sort(Tt.begin(), Tt.end());

  if(St==Tt){
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}


// //以下はReal time, AC*54, TLE*24のコード。
// int main(){
//   int H, W;
//   cin >> H >> W;
//
//   vector<string> S(W);
//   vector<string> T(W);
//
//   for(int i=0; i<H; i++){
//     string tmp;
//     cin >> tmp;
//     for(int j=0; j<W; j++){
//       S[j].push_back(tmp[j]);
//     }
//   }
//
//   for(int i=0; i<H; i++){
//     string tmp;
//     cin >> tmp;
//     for(int j=0; j<W; j++){
//       T[j].push_back(tmp[j]);
//     }
//   }
//   //ここまでで、Stringが縦に並んでいる配列ができた。Stringを並べ替える＝列を
//   //並び替えるになっているはず。
//   //いや、重いよな、そりゃ。
//
//
//   vector<int> Perm(W);
//   for(int i=0; i<W; i++){
//     Perm.at(i)=i;
//   }
//
//
//   do{
//     rep(i,W){
//       if(S[Perm[i]] == T[i]){
//
//         if(i==W-1){
//           cout << "Yes" << endl;
//           return 0;
//         }else{
//           continue;
//         }
//
//       }else{
//         break;
//       }
//     }
//   }while(next_permutation(Perm.begin(),Perm.end()));
//
//   cout << "No" << endl;
//   return 0;
// }
