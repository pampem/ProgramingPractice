//AtCoder Contest real time!
//Today >> 1126
//B - LOOKUP

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S,T;
  cin >> S >> T;

  for(int i=0; i<S.size(); i++){
    int k=i;
    for(int j=0; j<T.size(); j++){
      if(S[k]==T[j]){
        k++;
        if(j==T.size()-1){
          cout << "Yes" << endl;
          return 0;
        }
        continue;
      }else{
        break;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
