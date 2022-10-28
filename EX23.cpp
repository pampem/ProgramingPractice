#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  //input btw
  vector<int> innum(N);
  rep(i,N){
    cin >> innum.at(i);
  }

  map<int, int> num;
  rep(i,N){                     //入力値がキーとなっている連想配列
    if(num.count(innum.at(i))){ //numにすでにそのvalueがキーになっている値があれば。
      num.at(innum.at(i))++;
    }else{          //なければ、出現回数=1をインプット。
        num[innum.at(i)]=1;
    }
  }

  // int max_cnt = 0;  // 出現回数の最大値を保持
  // int ans = -1;     // 出現回数が最大になる値を保持
  // for (int x : innum) {
  //   // 今見ているxの出現回数が、その時点の最大よりも大きければ更新
  //   if (max_cnt < num.at(x)) {
  //     max_cnt = num.at(x);
  //     ans = x;
  //   }
  // }
  // cout << ans << " " << max_cnt << endl;
  //
  vector<pair<int,int>> allpair;

  for(auto p:num){
    auto k= p.first;
    auto v= p.second;
    allpair.push_back(make_pair(v, k));

  }
  sort(allpair.begin(), allpair.end());
  reverse(allpair.begin(),allpair.end());

  pair<int, int> t = allpair.at(0);
  int x, y;
  tie(x, y) = t;
  cout << y << " " << x  << endl; //EX22の、ペアソートを参考に。今回は降順。



}
