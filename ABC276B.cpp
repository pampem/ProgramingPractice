//ABC276 Real time
//Today >> 2205
//B - Adjacency List

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N, M;
  cin >> N >> M;
  //N; 都市数
  //M; 道路の数

  //隣接行列はTLEだったから、隣接リストをやるよ。てか隣接リストそのものの出力を求められていたらしい。
  vector<vector<int>> RinList(N+1);

  for(int i=1; i<=M; i++){
    int A,B; //tmp
    cin >> A >> B;

    RinList.at(A).push_back(B);
    RinList.at(B).push_back(A);
  }

  for(int i=1; i<=N; i++){
    sort(RinList.at(i).begin(), RinList.at(i).end());

    cout << RinList.at(i).size() <<" ";
    for(auto j:RinList.at(i)){
      cout << j << " ";
    }
    cout << endl;
  }

  //ACきたああああ

  // vector<vector<int>> RinGyo(N+1, vector<int>(N+1,0)); //隣接行列 0で初期化。なお0を指定しなくても0で初期化される。0列目、0行目は全部0のまま変更されない。使用しない。
  //
  // for(int i=0; i<M; i++){
  //   int A,B; //tmp
  //   cin >> A >> B;
  //
  //   RinGyo.at(A).at(B) = 1;
  //   RinGyo.at(B).at(A) = 1;
  // }
  //
  // for(int i=1; i<=N; i++){
  //   int flag =0;
  //   int d=0;
  //   for(int j=1; j<=N; j++){
  //     if(RinGyo.at(i).at(j))d++;
  //   }
  //   cout << d << " ";
  //
  //   for(int j=1; j<=N; j++){
  //     if(RinGyo.at(i).at(j)){
  //       cout << j << " ";
  //       flag = 1;
  //     }
  //   }
  //   if(flag)cout << endl;
  // }

  return 0;

}
