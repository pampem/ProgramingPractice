//ABC276 Real time
//Today >> 2205
//C - Previous Permutation

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> provide(N);
  rep(i,N){
    cin >> provide.at(i);
  } //これに合うやつを探して、一個前の順列のものを出力。

  prev_permutation(provide.begin(), provide.end());
  //prev_permutation(begin(provide), end(provide));
  for(int i=0; i<N; i++){
    cout << provide.at(i) <<" ";
  }
  cout << endl;

  return 0;

}
