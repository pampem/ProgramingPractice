//AtCoder Today >> 1210
//B - Split?

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;
  cin >> S;

  if(S[0]=='1'){
    cout << "No" << endl;
    return 0;
  }
  //これ以降は,S[0]=='0', ピン1が倒れているときの処理。
  //rowを作成する。

  vector<int> rows(7,0); //rowsは全て倒れていると0, 1本でも立っていると1
  if(S[6]=='1'){
    rows[0]=1;
  }
  if(S[3]=='1'){
    rows[1]=1;
  }
  if(S[7]=='1' or S[1]=='1'){
    rows[2]=1;
  }
  if(S[4]=='1'){
    rows[3]=1;
  }
  if(S[8]=='1' or S[2]=='1'){
    rows[4]=1;
  }
  if(S[5]=='1'){
    rows[5]=1;
  }
  if(S[9]=='1'){
    rows[6]=1;
  }

  int split=0;
  for(int i=0; i<7-1; i++){
    if(rows[i]==1){
      for(int j=i+1; j<7; j++){
        if(rows[j]==0){
          split = 1;
          continue;
        }else if(rows[j]==1 and j>i+1 and split == 1){
          cout << "Yes" << endl;
          return 0;
        }else if(rows[j]==1){
          break;
        }
      }
    }
    split = 0;
  }

  cout << "No" << endl;

  return 0;
}
