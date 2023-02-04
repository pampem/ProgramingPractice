//AtCoder Today >> 230204
//B - Qualification Contest
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N, K;
  cin >> N >> K;

  vector<string> S(K);
  rep(i, K){
    cin >> S[i];
  }

  sort(S.begin(), S.end());
  
  rep(i, K){
    cout << S[i] << endl;
  }

  return 0;
}
