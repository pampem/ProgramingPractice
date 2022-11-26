//AtCoder Contest real time!
//Today >> 1126
//A - wwwvvvvvv

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;
  cin >> S;
  int ans=0;
  for(int i=0; i<S.size(); i++){
    if(S[i] == 'v')ans++;
    if(S[i] == 'w')ans+=2;
  }
  cout << ans << endl;
}
