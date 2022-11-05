//ABC276 Real time
//Today >> 2205
//C - Previous Permutation

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> provide(N);
  rep(i,N){
    cin >> provide.at(i);
  } //これに合うやつを探す

  vector<int> permu(N);
  for(int i=1; i<=N; i++){
    permu.at(i-1)=i;
  }
  vector<int> tee = permu;


  // vector<int> ans(N); //tmp
  // ans=permu; //初期化
  int count=0;
  while(next_permutation(permu.begin(), permu.end())) {
    count++;
    if(permu == provide){
      break; //ここでのCount-1のときのpermuを出力したい。
    }
  }

  int test=1;
  while(next_permutation(tee.begin(), tee.end())) {
    test++;
    if(test==count){
      rep(i,N){
        cout<<tee.at(i) <<" ";
      }
      cout << endl;
      return 0;
    }

  }

  rep(i,N){
    cout<<permu.at(i) <<" ";
  }
  cout << endl;
  // do {
  //   if(provide==permu){
  //     rep(i,N){
  //       cout<<ans.at(i) <<" ";
  //     }
  //     cout << endl;
  //     return 0;
  //   }
  //   ans = permu;
  // } while (next_permutation(permu.begin(), permu.end()));//ここでpermuが次の順列に並び替えられる。



  return 0;

}
