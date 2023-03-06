//AtCoder Today >> 230305
//A - CAPS LOCK

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;

  rep(i,s.size()){
    s[i] =  s[i] - 'a' + 'A';
    cout << s[i];
  }

  cout << endl;

  return 0;
}