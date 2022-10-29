//ABC-DEF

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int64_t A, B, C, D, E, F;
  cin>>A>>B>>C>>D>>E>>F;

  //int64_t test = (A*B*C)-(D*E*F);
  int64_t x = 998244353;
  int64_t fA = A%x;
  int64_t fB = B%x;
  int64_t fC = C%x;
  int64_t first = ((fA*fB)%x*fC)%x;

  int64_t fD = D%x;
  int64_t fE = E%x;
  int64_t fF = F%x;
    //cout << fc << endl;
  int64_t second = ( ((fD*fE)%x)*fF )%x;
  //int64_t second =((((D%x)*E)%x)*F)%x;
    //cout << second << endl;
  int64_t ans = first-second;
    //cout << ans << endl;

  if(ans < 0)ans+=x;

  cout << ans << endl;
  return 0;

}
