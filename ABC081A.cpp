//AC Beginners Selection 3rd problem.
//Today >> 221031
//どうしてもBitsetを使いたかった。

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
  bitset<3> bit;
  string s;
  cin >> s;
  rep(i,3){
    if(s.at(i)=='1'){
      bit.set(i);
    }
  }


  cout << bit.count() << endl;


  return 0;

}
