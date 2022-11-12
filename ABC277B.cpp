//ABC unrated today >> 221112
//B - Playing Cards Validation

#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;

  string S;
  set<string> st;

  for(int i=0; i<N; i++){
    cin >> S;
    if(S[0]=='H' || S[0]=='D'|| S[0]=='C' || S[0]=='S'){
      if(S[1]=='A' || S[1]=='2' || S[1]=='3' || S[1]=='4' || S[1]=='5' || S[1]=='6' || S[1]=='7' || S[1]=='8' || S[1]=='9' || S[1]=='T' || S[1]=='J' || S[1]=='Q' || S[1]=='K'){
        if(st.count(S)){
          cout << "No" << endl;
          return 0;
        }
        st.insert(S);
      }else{
        cout << "No" << endl;
        return 0;
      }
    }else{
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;


  return 0;


}
