//AtCoder Today >> 230123
//C - Cash Register

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;
  cin >> S;

  int ans = 0;
  while(!empty(S)){
    const auto back = S.back();
    S.pop_back();
    if(back == '0' && S.back() == '0') S.pop_back();
    
    ans++;
    
  }
  cout << ans << endl;

  return 0;
}