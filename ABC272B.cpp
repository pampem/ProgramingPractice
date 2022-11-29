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
    // for(int j=0; j<k; j++){ //Equivalent
    //   cin >> x[j];
    //   x[j]--;
    // }
    for(auto &xin:x){
      cin >> xin;
      xin--;
    }
    for(int j=0; j < (int)x.size()-1; j++){
      for(int k=j+1; k<(int)x.size();k++){
        vec[x[j]][x[k]] = true;
      }
    }
  }

  bool ans = true;
  for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
      ans &= vec[i][j];
    }
  }

  cout << (ans ? "Yes" : "No") << endl;


  return 0;
}
