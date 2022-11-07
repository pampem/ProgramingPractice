//AtCoder競プロ90 today >> 1105
//Encyclopedia of Parentheses

//指定された長さのカッコ列を辞書順で全て出力する。
//

#include<bits/stdc++.h>
using namespace std;


int main(){
  int N;
  cin >> N;

  if(N%2){//入力が奇数だったら正しいカッコ列は存在しない
    return 0;
  }

  string R(N/2, '('); //必要数分、カッコを用意する。
  string L(N/2, ')');

  //ここからカッコをどうやって並べるかを考える。

  vector<vector <string>> ans(N); //二次元string配列。N*x

  R[0]+L[0]



  return 0;
}
