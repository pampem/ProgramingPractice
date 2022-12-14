//AtCoder Today >> 1214
//B - Modulo Number

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  //(N-x)%998244353 == 0
  int64_t N;
  cin >> N;

  for(int64_t x=0; x<=998244353; x++){
    if((N-x)%998244353 == 0){
      cout << x << endl;
      return 0;
    }
  }

  return 0;
}
