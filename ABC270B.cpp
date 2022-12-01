//AtCoder Today >> 1201
//B - Hammer

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int pos=0, distance = 0;

  if(X == 0){
    cout << distance << endl;
    return 0;
  }

  if((X>0 and Y>0 and X>Y) or (X<0 and Y<0 and X<Y)){
    //このときHammerを探さないといけない。
    if((Y>0 and Z>0 and Z>Y) or (Z<0 and Y<0 and Z<Y)){
      //Zも壁の向こうにしかない！
      cout << -1 << endl;
      return 0;
    }else{
      //Zはいける。
      //goto Z
      distance += abs(Z);
      pos = Z;

      //goto Y
      distance += abs(pos - Y);
      pos = Y;

      //goto X
      distance += abs(pos - X);
      pos = X;

    }

  }else{
    distance = abs(X);
  }

  cout << distance << endl;

  return 0;
}
