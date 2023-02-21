//AtCoder Today >> 230219
//A - Range Swap

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  int p,q,r,s;
  cin >> p >> q >> r >> s;
  vector<int> a(n);
  for(auto &x:a)cin >> x;

  vector<int> b(n);
  rep(i,n){
    if(p-1<=i && i<=q-1){
      b[i]=a[r+i-p];
    }else if(r-1<=i && i<=s-1){
      b[i]=a[i-r+p];
    }else{
      b[i]=a[i];
    }
  }
  for(auto x:b)cout << x << " ";
  cout << endl;
  return 0;
}