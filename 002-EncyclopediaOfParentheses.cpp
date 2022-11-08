//AtCoder競プロ90 today >> 1105
//Encyclopedia of Parentheses

//指定された長さのカッコ列を辞書順で全て出力する。

#include<bits/stdc++.h>
using namespace std;

bool judge(string S){
  int dep = 0;
  for(int i=0; i<S.size(); i++){
    if(S[i] == '(')dep++;
    if(S[i] == ')')dep--;
    if(dep < 0)return false;
  }
  if(dep == 0) return true;
  return false;
}

int main(){
  int N;
  cin >> N;

  if(N%2){//入力が奇数だったら正しいカッコ列は存在しない
    return 0;
  }
  //Bit全探索をする。
  //答えはたかだか2^N通り。
  //カッコ列が正しい条件は以下。
  //( と)の数が同数
  //全てのiについて、i番目までの時点で(の数が)以上であること。
  //以上の2条件を満たせばよい。

  //Bit全探索開始
  for(int i=0; i<(1<<N); i++){ //if N=4, i=0, 1.... 15 cuz 1<<4 で2進数として10000になり、これは十進数で16。
    string Candidate = "";
    for(int j=N-1; j >= 0; j--){ //if N=4, j=3,2,1,0
      if((i&(1<<j))==0){ //0&(1<<3)=0AND1を3bitシフトした値が、0であればtrue これでbit全探索ができるらしい。
        Candidate += "(";
      }else{
        Candidate += ")";
      }
    }
    bool I = judge(Candidate);
    if(I) cout<<Candidate<<endl;
  }

  return 0;
}
