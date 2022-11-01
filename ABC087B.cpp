//Coins
//ABS 4th
//today >> 221101

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  //全探索
  //どうやるんだっけ、bit全探索でやるか。
  //bit全探索でやるとなると、被りありの全通りになってしまう。
  //今回被りはいらない。

  int c500, c100, c50, x, ans=0;

  cin >> c500 >> c100 >> c50 >> x;

  int cnt = c500 + c100 + c50;

  for(int i=0; i < c500+1; i++){
    for(int j=0; j < c100+1; j++){
      for(int k=0; k<c50+1; k++){
        int sum = i*500 + j*100 + k*50;
        if(sum==x)ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;

}
