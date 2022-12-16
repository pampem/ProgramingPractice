//AtCoder Today >> 1214
//B - Explore

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N,M;
  long long T;
  cin >> N >> M >> T;

  vector<int> A(N);
  for(int i=1; i<N; i++){
    cin >> A.at(i);
  }

  vector<int> bonus(N,-1);
  rep(i,M){
    int tmp;
    cin >> tmp;
    cin >> bonus.at(tmp);
  }

  for(int i=1; i<N; i++){
    if(bonus[i]!=-1){
      T += bonus[i];
    }
    if(T-A[i]>0){
      T -= A[i];
    }else{
      cout << "No" << endl;
      return 0;
    }

  }
  cout << "Yes" << endl;
  return 0;
}
