//AtCoder Today >> 230212
//A - flip

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;
  int n=s.size();
  rep(i,n){
    if(s[i]=='0'){
      cout << 1;
    }else{
      cout << 0;
    }
  }
  cout << endl;
  return 0;
}