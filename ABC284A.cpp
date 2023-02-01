//AtCoder Today >> 230201
//A- Sequence of Strings

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
    cin >> N;
    vector<string> S(N);
    for(auto &a:S){
      cin >> a;
    }

    for(int i=N-1; i>=0; i--){
      cout << S[i] << endl;
    }
  
  return 0;
}
