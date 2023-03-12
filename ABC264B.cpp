//AtCoder Today >> 230312
//B - Nice Grid

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int r,c;
  cin >> r >> c;

  int dis=max(abs(r-8), abs(c-8));
  if(dis%2){
    cout << "black" << endl;
  }else{
    cout << "white" << endl;
  }
  return 0;
}