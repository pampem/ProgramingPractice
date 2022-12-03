//AtCoder Today >> 1203
//C - Extra Charactor
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S, T;
  cin >> S >> T;

  for(int i=0; i<(int)S.size(); i++){
    if(S[i]!=T[i]){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << S.size()+1 << endl;

  return 0;
}
