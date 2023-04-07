//AtCoder Today >> 230319
//B - ASCII Art

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int h,w;
  cin >> h >> w;

  rep(i,h){
    rep(j,w){
      int a;
      cin >> a;
      if(a==0) cout << '.';
      else{
        char moji = 'A' + a - 1;
        printf("%c", moji);
      }
    }
    cout << endl;
  }
  return 0;
}