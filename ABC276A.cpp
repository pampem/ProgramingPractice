//ABC276 Real time
//Today >> 2205
//A - Rightmost

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;

  cin >> S;
  int lastAidx = -1;

  for(int i=0; i<S.size(); i++){
    if(S[i]=='a'){
      lastAidx = i+1;
    }
  }
  cout << lastAidx << endl;
  return 0;

}
