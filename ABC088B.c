//Card Game for Two
//ABS 6th
//today >> 221101

//Plan >> aをソートし、最大を取っていく。aliceは一つおきに最初から取って、Sumを。
//Bobは一つおきに二番目のaから取り、Sumを取る。
//Suma- sumbを出力する。

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >>N;

  vector<int> a(N);

  rep(i,N){
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());
  //sort(a.begin(),a.end(), greater<int>());
  //昇順
  int suma=0, sumb=0;

  for(int i=N-1; i>=0; i-=2){
    suma += a.at(i);
  }
  for(int i=N-2; i>=0; i-=2){
    sumb += a.at(i);
  }



  cout << suma-sumb << endl;

  return 0;

}
