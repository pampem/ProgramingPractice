//AtCoder Today >> 230226
//C - LRUD Instructions 2
//Real Time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  //current positionを作る
  //setに位置をためておく
  //ためる直前に同じ位置が入っているかどうかをcountする。
  //countされたらyesして即終了でよい。
  //n回ループしたらnoで終了。

  pair<int, int> cp(0,0); //current position
  set<pair<int,int>> st;
  st.emplace(cp);

  rep(i,n){
    if(s[i] == 'L') cp.first--;
    if(s[i] == 'R') cp.first++;
    if(s[i] == 'U') cp.second++;
    if(s[i] == 'D') cp.second--;
    if(st.count(cp)){
      cout << "Yes" << endl;
      return 0;
    }
    st.emplace(cp);
  }
  cout << "No" << endl;

  return 0;
}