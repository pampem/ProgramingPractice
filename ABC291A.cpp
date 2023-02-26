//AtCoder Today >> 230226
//A - camel Case
//Real Time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;

  rep(i, s.size()){
    if(s[i] <= 'Z' && 'A' <= s[i]) cout << i+1 << endl;
  }
  return 0;
}