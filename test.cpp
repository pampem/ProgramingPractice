//AtCoder Today >> 1129
//B - Everyone is Friends

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N,M;
  cin >> N >> M;

  vector<vector<bool>> vec(N, vector<bool>(N,0));


  for(int i = 0; i<M; i++){
    int k;
    cin >> k;
    vector<int> x(k);
    // for(int j=0; j<k; j++){
    //   cin >> x[j];
    //   cout << x[j] << endl;
    // }
    for(auto &xin:x){
      cin >> xin;
      xin--;
    }
    


  }


  return 0;
}
