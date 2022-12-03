//AtCoder Today >> 1202
//C - Submask

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int64_t x;
  cin >> x;

  vector<int64_t> res={0};

  for(int d=0; d<60; d++){
    if(x&(1ll<<d)){ //1をd bit left shift. ll means long long.
      int sz = res.size();
      for(int i=0; i<sz;i++){
        res.push_back(res[i]|(1ll<<d));
      }
    }
  }
  for(auto &nx : res) cout << nx << endl;

  return 0;
}
