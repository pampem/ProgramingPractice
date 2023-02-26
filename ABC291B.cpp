//AtCoder Today >> 230226
//B - Trimmed Mean
//Real Time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  vector<int> x(5*n);
  for(auto &a:x) cin >> a;

  sort(x.begin(), x.end());
  
  double ans = 0;
  for(int i=n; i<5*n-n; i++){
    ans += x[i];
  }
  ans /= 3*n;
  cout << ans << endl;
  return 0;
}