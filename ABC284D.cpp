//AtCoder Today >> 230218
//D - Happy New Year 2023

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long;

int main(){
  int t;
  cin >> t;

  //p,qは絶対n以下。
  //とりあえずnの約数となる素数を全列挙する。
  //全列挙した中で、p,qの組み合わせを全探索し、n=p^2*qとなるものを探す。

  rep(i,t){
    ll n;
    cin >> n;　//testcase:nのとき、nの約数となる素数を全列挙する。
    vector<ll> sosu;

    for(ll i=1; i*i<=n; i++){
      if(n%i==0){
        sosu.push_back(i);
      }
    }
    ll p=0,q=0;
    
  }
  return 0;
}
