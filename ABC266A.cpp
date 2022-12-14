//AtCoder Today >> 1214
//A - Middle Letter

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;
  cin >> S;

  cout << S[(S.size()+1)/2-1] << endl;

  return 0;
}
