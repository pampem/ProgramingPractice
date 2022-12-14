//AtCoder Today >> 1210
//A - Saturday

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;
  cin >> S;

  int ans;

  if(S[0]=='M'){
    ans = 5;
  }else if(S[0]=='T'){
    if(S[1]=='u'){
      ans = 4;
    }else{
      ans = 2;
    }
  }else if(S[0]=='W'){
    ans = 3;
  }else if(S[0]=='F'){
    ans = 1;
  }

  cout << ans << endl;
  
  return 0;
}
