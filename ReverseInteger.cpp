//Leet today >> 221102
//Reverse Integer
//思ったよりむずかしいかも、int32を超える範囲の値が入力されるのが厄介。バイト終わったら再開。

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

class Solution {
public:
    int reverse(int x) {
      string s = to_string(x);
      //sをReverseする。

      int i=0,j=s.size()-1;

      while(i<j){
        char tmp = s.at(i);
        s.at(i)=s.at(j);
        s.at(j)=tmp;
        i++;
        j--;
      }

      x = stoi(s);
      if(s.at(s.size()-1)=='-'){
        x*=-1;
      }

      return x;
    }
};
