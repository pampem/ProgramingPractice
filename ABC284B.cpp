//AtCoder Today >> 230201
//B- Multi Test Cases

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solvecase(){
  int N;
  int ans = 0;
  cin >> N;
  vector<int> A(N);
  for(auto &a:A){
    cin >> a;
    if(a%2==1){
      ans++;
    }
  }
  return ans;
}
int main(){
  int T;
  cin >> T;
  rep(i,T){
    cout << solvecase() << endl;
  }
  
  return 0;
}
