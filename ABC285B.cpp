//AtCoder Today >> 230216
//B - Longest Uncommon Prefix

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  string s;
  cin >> n >> s;

  for(int i=1; i<n; i++){
    for(int j=1; j<=n; j++){//jはlの候補。
      if(i+j>n){cout << j-1 << endl; break;}
      if(s[j-1] == s[j+i-1]) {cout << j-1 << endl; break;}

    }
  }
  
  return 0;
}