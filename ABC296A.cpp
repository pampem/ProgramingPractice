//AtCoder Today >> 230405
//A - Alternately

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  string s;
  cin >> n >> s;

  rep(i,n-1){
    if(s[i]==s[i+1]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}