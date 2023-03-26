//AtCoder Today >> 230327
//A - Probably English

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  rep(i,n){
    string s;
    cin >> s;

    if(s == "and" || s == "not" || s == "that" || s == "the" || s == "you"){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}