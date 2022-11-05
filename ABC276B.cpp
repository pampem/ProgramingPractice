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

  //vector<vector<int>> City(M, vector<int>(2)); //M行2列の２次元配列
  vector<pair<int, int>> City(M); //M行2列の２次元配列　与えられた変数を保存するやつ。つまり道に対してそれがつなぐ都市。
  vector<int> d(N+1,0); //それぞれの都市に存在する道の数を保存する変数 ex; d[0]= 都市1の道の数

  for(int i=0; i<M; i++){//道
    cin >> City.at(i).first;
    cin >> City.at(i).second;

    //ここで都市１のペアは都市ｘみたいなことを保存すれば？
    //やっぱペアを使おう。
    d.at(City.at(i).first)++;
    d.at(City.at(i).second)++;

  }
  //d が、idxと都市名が一致するようにした。（つまり、d[0]は使わない。)

  //dが最初に求まったから、ｄに基づいてループを回したい。
  //d[1]=都市1の道の数。
  

  for(int i=1; i<=N; i++){//都市
    vector<int> paircity(d.at(i)); //i番目の都市の道の数分、ペアとなる都市があるから。

    //ペアをみつけてpaircityに入れよう！
    int pcidx=0; //paircity index
    rep(j,M){
      if(City.at(j).first == i){   //ここでは、i+1の都市だったとき、そのペアをみてるけれど、多分それは重い。
        paircity.at(pcidx) = City.at(j).second;
        pcidx++;
      }
      if(City.at(j).second == i){
        paircity.at(pcidx) = City.at(j).first;
        pcidx++;
      }
    }

    sort(paircity.begin(), paircity.end()); //表示部分開始。まずaをソートする。
    cout << d.at(i) << " ";
    rep(j,d.at(i)){
      cout << paircity.at(j) << " ";
    }
    cout << endl;

  }


  return 0;

}
