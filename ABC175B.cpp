//AtCoder Today >> 230106
//B - Making Triangle

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> L(N);
  for(auto &a:L){
    cin >> a;
  }

  //２つの辺の和は残りの一つの辺の長さより長い
  int cnt=0;
  sort(L.begin(),L.end());

  //for全探索するぞ～

  for(int i=0; i<N; i++){
    for(int j=0; j<i; j++){
      for(int k=0; k<j; k++){
        if(L.at(k) != L.at(j) and L.at(i) != L.at(j) and L.at(i) != L.at(k)
          and L.at(k) + L.at(j) > L.at(i)){
          cnt++;
        }
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
