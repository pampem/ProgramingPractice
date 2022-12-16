//AtCoder Today >> 1214
//A - Apple

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int X,Y,N;
  cin >> X >> Y >> N;

  int ans;
  ans = (N%3)*X;
  ans += (N-N%3)/3*Y;

  int ans2;
  ans2 = N*X;
  cout << min(ans,ans2) << endl;
  return 0;
}
