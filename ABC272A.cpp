//AtCoder Today >> 1126
//A - Integer Sum

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  int ans=0;
  for(int &a:A){
    cin >> a;
    ans+=a;
  }

  cout << ans << endl;



  return 0;
}
