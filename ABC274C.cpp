//Atcoder today >> 1111
//C - Ameba

#include<bits/stdc++.h>
using namespace std;

// int count(map<int, int> m, int key){
//   //与えられたmapのkeyが存在したら=親がいたら、もう一回これを回してctを増やしていく。いなかったら0。再帰。
//   if(m.count(key)){
//     int ct = count(m, m[key]);
//     return ct+1;
//   }else{
//     return 0;
//   }
//
// }

int main(){
  int N;
  cin >> N;
  //
  //
  // map<int, int> m;.
  //
  //
  // //Aがアメーバの番号。添字iがそのアメーバの子供の番号を導く数。子供は2i, 2i+1番。
  //
  // //map使って、キーに子のアメーバ番号、valにその親番号を書けばいいのでは？
  //
  //
  // for(int i=1; i<=N; i++){
  //   int tmp;
  //   cin >> tmp;
  //   m[2*i] = tmp;
  //   m[2*i+1] = tmp;
  // }
  //
  // for(int i=1; i<=m.size()+1; i++){
  //   cout << count(m, i) << endl;
  // }

  vector<int> ans(2*N+1);
  ans[0] = 0;

  for(int i=0; i<N; i++){
    int a;
    cin >> a;
    ans[2*i+1] = ans[a-1]+1;
    ans[2*i+2] = ans[a-1]+1;
  }

  for(int i=0; i<N*2+1; i++){
    cout << ans[i] << endl;
  }

  return 0;

}
