//競プロ典型90問 001 Yokan Party
//today >> 221104
//1問目。APG4bとABSが終了したため、次のAtCoderを探したところこれに行き着いた。
//楽しんで頑張ろう。

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool abovetheborder(int64_t border, int64_t N, int64_t L, int64_t K, vector<int64_t> A){
  int64_t currentlen = 0;
  int64_t count = 0;
  int64_t prev = 0;

  for(int64_t i=0; i < N; i++){
    currentlen = A.at(i) - prev;
    if(currentlen >= border && L-A.at(i) >= border){
      prev = currentlen;
      count++;
      currentlen = 0;
    }
  }
  if(count >= K) return true;
  return false;
}


int main(){
  int64_t N, L, K;
  vector<int64_t> A(N);
  //N;合計切れ目数
  //L;ようかんの長さ
  //K;切る数
  //A;切れ目位置

  cin >> N >> L >> K;
  for(int64_t i=0; i<N; i++){
    cin >> A.at(i);
  }
  //二分探索を行う。
  //まずはNのL/2を境界として、それ以上かどうかを判定する。
  //境界値を与えたら答えがそれ以上かそれ未満かを返してくれる関数、bool abovetheborder(int border); if true >> 答えはそれ以上
  //を作成した。

  //次に、borderを更新するプログラムを書く。
  //ループの終了判定は？　
  //それ以上と出た時、更新できなくなったら（border+1が探索済みであったら）
  //そうすれば自ずからスコアがマックスになる切り方がわかるはず。borderはそのときのスコアを示す。
  //つまり最終的なBorderをcoutする。

  //borderの更新方法について。
  //prevborderforupper = 二個前のborder。初期値はL
  //prevborderforlower = 2個前のborder。初期値は0
  //viewlength = 見る範囲を表す変数
  //viewlength = L (at first)

  int64_t border = L/2;//更新
  // int flag=1; //border(i-1) = border(i)でflag = 0
  // int viewlength = L/2;
  int64_t left = -1;
  int64_t right = L+1;

  while(right-left>1){
    border = left + (right - left)/2;
    if(abovetheborder(border, N, L, K, A))left = border;
    else right = border;
  }
  cout << left << endl;

  return 0;


}
