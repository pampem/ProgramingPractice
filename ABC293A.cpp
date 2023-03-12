//AtCoder Today >> 230311
//A - Swap Odd and Even

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;
  int si = s.size();

  for(int i=1; i<=si/2; i++){
    char tmp = s[2*i-2];
    s[2*i-2] = s[2*i-1];
    s[2*i-1] = tmp;
  }
  cout << s << endl;

  return 0;
}