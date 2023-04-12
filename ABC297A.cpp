//AtCoder Today >> 2304012
//A - Double Click

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,d;
  cin >> n >> d;

  int prevT;
  cin >> prevT;

  rep(i,n-1){
    int t;
    cin >> t;
    if(t-prevT <= d){
      cout << t << endl;
      return 0;
    }
    prevT = t;
  }
  cout << -1 << endl;
  return 0;
}