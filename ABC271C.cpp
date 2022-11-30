//AtCoder Today >> 1130
//C - Manga

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<bool> set(N+2);
  rep(i,N){
    int a;
    cin >> a;
    set[min(N+1,a)] = true;
  }
  for(int read = 1; N>=0; read++){
    N -= set[read] ? 1 : 2;
    if(N < 0) cout << read -1 << endl;
  }
  // sort(a.begin(),a.end()); //昇順に並べる
  //
  // int readbook=0;
  // int throwcnt = 0; //捨てた数
  // int itr = 0;
  // while(1){
  //   if(a[itr] == readbook+1){
  //     readbook++;
  //     itr++;
  //   }else{ //readbookが存在しない場合、買うしかない。売る本は末尾の本。
  //     if(a.size() - throwcnt - itr > 2){ //ここでは、順番に並んでるものを除いて、末尾に売れる本があるかどうかを判定したい。
  //       throwcnt+=2; //2冊捨てる。
  //       readbook++;
  //     }else{
  //       cout << readbook << endl;
  //       return 0;
  //     }
  //
  //   }
  //
  // }

  return 0;
}
