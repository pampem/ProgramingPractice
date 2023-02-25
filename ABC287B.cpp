//AtCoder Today >> 230221
//B - Postal Card

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,m;
  cin >> n >> m;

  vector<string> s(n);
  vector<string> t(m);
  rep(i,n){
    cin >> s[i];
  }
  rep(i,m){
    cin >> t[i];
  }

  int ans=0;
  

  rep(i,n){
    rep(j,m){
      int tmp=0;
      rep(k,3){
        if(s[i][k+3] != t[j][k])break;
        tmp++;
      }
      if(tmp == 3){
          ans++;
          break;
      }
    }
  }
  cout << ans << endl;
  
  return 0;
}