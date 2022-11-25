//AtCoder Today >> 1124
//D - All Assign Point Add (not real time)

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> A(N);

  // for(int i=0; i<N; i++){
  //   cin >> A.at(i);
  // }

  for (int &a: A)
       cin>>a;

  map<int, int64_t> M;
  int base = 0;
  for(int i=0; i<N; i++)
    M[i] = A.at(i);

  int Q;
  cin >> Q;

  for(int i=0; i<Q; i++){
    int t;
    cin >> t;
    if(t == 1)
    {
      int x;
      cin >> x;
      base = x;
      M.clear();
    }
    else if(t == 2)
    {
      int i, x;
      cin >> i >> x;
      M[i-1] += x;
    }
    else
    {
      int i;
      cin >> i;
      cout << M[i-1] + base << endl;
    }
  }



  //This code get AC in Sample, but in N == large condition, this get TLE.
  // vector<int64_t> A(N);
  //
  // for(int i=0; i<N; i++){
  //   cin >> A.at(i);
  // }
  //
  // int Q;
  // cin >> Q;
  // int indicater, xq, iq;
  //
  // for(int i=0; i<Q; i++){
  //   cin >> indicater;
  //
  //   if(indicater == 1){
  //     cin >> xq;
  //     // vector<int64_t> X(N, xq);
  //     // A = X;
  //
  //     rep(j,A.size()){
  //       A.at(j) = xq;
  //     }
  //
  //   }else if(indicater == 2){
  //     cin >> iq >> xq;
  //     A.at(iq-1) += xq;
  //
  //   }else{// == 3
  //     cin >> iq;
  //     cout << A.at(iq-1) << endl;
  //   }
  // }

  return 0;
}
