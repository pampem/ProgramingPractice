//AtCoder Today >> 1124
//D - All Assign Point Add (not real time)

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int64_t> A(N);

  for(int i=0; i<N; i++){
    cin >> A.at(i);
  }

  int Q;
  cin >> Q;

  for(int i=0; i<Q; i++){
    int indicater;
    cin >> indicater;

    if(indicater == 1){
      int xq;
      cin >> xq;
      vector<int64_t> X(N, xq);
      A = X;
    }else if(indicater == 2){
      int iq, xq;
      cin >> iq >> xq;
      A.at(iq-1) += xq;

    }else{// == 3
      int iq;
      cin >> iq;
      cout << A.at(iq-1) << endl;
    }
  }

  return 0;
}
