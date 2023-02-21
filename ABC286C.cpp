//AtCoder Today >> 230219
//C - Rotate and Palindrome

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main(){
  int n;
  cin >> n;

  ll a,b;
  cin >> a >> b;

  string s;
  cin >> s;

  s+=s;
  ll ans = 1ll << 60;

  rep(i,n){
    ll tmp = a*i;
    for(int j=0; j < n/2; j++){
      int l = i+j;
      int r = i+n-1-j;
      if(s[l] != s[r]) tmp += b;
    }
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}