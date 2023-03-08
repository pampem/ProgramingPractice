//AtCoder Today >> 230308
//C - Four Variables

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main(){
  int n;
  cin >> n;
  
  ll ans = 0;

  //方針 - ABを決め打ち(=x)。するとCD=N-xとなる。そこからA,B,C,Dを決める。

  for(int X=1; X<n; X++){ // x=AB
    int Y = n-X; // y=CD
    ll x = 0, y = 0;
    for(int j=1; j*j<=X; j++){
      if(X%j==0){
        x++;
        if(X!=j*j) x++;
      }
    }
    for(int j=1; j*j<=Y; j++){
      if(Y%j==0){
        y++;
        if(Y!=j*j) y++;
      }
    }
    ans += x*y;

  }
  cout << ans << endl;

  return 0;
}