//AtCoder Today >> 1114
//D - Takahashi's solitaire

#include<bits/stdc++.h>
using namespace std;


int main(){
  //v(i+1)mod k について。vはソートされている。vi < vi+1が保証。 vi=maxのとき、オーバーフローしないようにmod kをとってる。
  //k > m-1だったらどうなるの？
  




  //以下はサンプルAC*3, 提出TLEのコード。（WA1)
  // int ans=INT_MAX;
  //
  // for(int i=0; i<N; i++){
  //   vector<int> cpy = v;
  //   int pick = cpy.at(i);
  //   cpy.erase(cpy.begin() + i);
  //
  //   for(int j=0; j<N; j++){
  //     if( count(cpy.begin(), cpy.end(), pick)){//vにpickと同じ値が存在したら。
  //       //pick は変更なし
  //       cpy.erase(find(cpy.begin(),cpy.end(),pick));
  //     }else if(count(cpy.begin(), cpy.end(), (pick+1) % M)) {//pickが存在しなかったら、pick+1のmod Mが書かれたカードがあるかを探す。
  //       pick = (pick+1) % M;
  //       cpy.erase(find(cpy.begin(),cpy.end(),pick));
  //     }else{//選べるカードがなくなったら。
  //       int tmp = accumulate(cpy.begin(), cpy.end(), 0);
  //       if(ans > tmp) ans = tmp;
  //       break;
  //     }
  //   }
  //
  // }
  // cout << ans << endl;


  return 0;
}
