//ABC today >> 1120
//1119のコンテストは、同窓会で参加できなかった。not real time!

//A-Shift

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;

  vector<int> v(N);
  for(int i=0; i<N; i++){
    cin >> v.at(i);
  }

  for(int i=0; i<K; i++){
    v.erase(v.begin());
    v.push_back(0);
  }

  for(int i=0; i<v.size(); i++){
    cout << v.at(i) << " ";
  }
  cout << endl;

  return 0;
}
