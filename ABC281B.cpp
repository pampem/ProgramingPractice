//AtCoder Today >> 1210
//B - Sandwich Number
//Real time! (unrated)

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;
  cin >> S;

  if(S.size()==8){
    if('A'<= S[0] and S[0] <= 'Z'){
      string C="";
      for(int i=1; i<7; i++){
        C.push_back(S[i]);
      }
      if(C.size() == 6){
        int c = stoi(C);
        if(100000 <= c and c <= 999999){
          if('A'<= S[7] and S[7] <= 'Z'){
            cout << "Yes" << endl;
            return 0;
          }
        }
      }

    }
  }
  cout << "No" << endl;

  // int flag = 0;
  //
  // if(!('A'< S[0] and S[0] <= 'Z' and 'A'< S[7] and S[7] <= 'Z' )){
  //   cout << "No" << endl;
  //   return 0;
  // }
  // if(S.size() != 8){
  //   cout << "No" << endl;
  //   return 0;
  // }
  //
  // string C="";
  // for(int i=1; i<7; i++){
  //   C.push_back(S[i]);
  // }
  //
  // if(C.size() != 6){
  //   cout << "No" << endl;
  //   return 0;
  // }
  //
  // int c = stoi(C);
  // if(!(100000 <= c and c <= 999999)){
  //   cout << "No" << endl;
  //   return 0;
  // }
  //
  // cout << "Yes" << endl;

  return 0;
}
