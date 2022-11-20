//ABC today >> 1120
//1119のコンテストは、同窓会で参加できなかった。not real time!

//B-Misjudge the time

#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, M;
  cin >> H >> M;

  int A, B, C, D;

  while(1){
    B = H%10;
    D = M%10;

    if(H-B == 0){//まあHが一桁のとき。
      A = 0;
    }else{
      A = (H-B)/10;
    }

    if(M-D == 0){
      C = 0;
    }else{
      C = (M-D)/10;
    }

    //A C 時 B D 分が正確な時刻であればbreak;
    int hm = A*10 + C;
    int mm = B*10 + D;
    if(0 <= hm and hm <=23 and 0 <= mm and mm <= 59) break;



    if(M==59){
      M=0;
      if(H==23){//Mが繰り上がるときHを足す。
        H=0;
      }else{
        H++;
      }
    }else{
      M++;
    }
  }

  cout << H << " " << M << endl;

  return 0;
}
