//AtCoder Today >> 230228
//A - Contest Result

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,m;
  cin >> n >> m;

  vector<int> a(n);
  for(auto &x:a) cin >> x;

  int ans=0;

  rep(i,m){
    int b;
    cin >> b;

    ans += a[b-1];
  }
  cout << ans << endl;

  return 0;
}