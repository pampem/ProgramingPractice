//AtCoder Today >> 230312
//A - "atcoder".substr()

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int l,r;
  cin >> l >> r;
  l--; r--;

  string s = "atcoder";

  for(int i=l; i<=r; i++){
    cout << s[i];
  }
  cout << endl;

  return 0;
}