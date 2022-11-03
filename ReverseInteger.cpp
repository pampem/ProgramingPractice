//Leet today >> 221102
//Reverse Integer
//思ったよりむずかしいかも、int32を超える範囲の値が入力されるのが厄介。バイト終わったら再開。

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

class Solution {
public:
    int reverse(int x) {
      int rev = 0; //これにxを逆にしたものが入る
      while(x != 0){
        int pop = x %10;
        x /= 10;
        if(rev > INT_MAX/10 || rev == INT_MAX / 10 && pop > 7) return 0;
        if(rev < INT_MIN/10 || rev == INT_MIN / 10 && pop < -8) return 0;
        rev = rev * 10 + pop;

      }
      return rev;

    }
};
