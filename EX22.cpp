#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using pii = pair<int, int>;


int main(){

  std::vector<pair<int,int>> p;
  int p1, p2;
  int N;
  cin >> N;

  rep(i,N){
    cin >> p1 >> p2;
    p.push_back(make_pair(p1, p2));
  }

  //swap
  rep(i,N){
    swap(p.at(i).first, p.at(i).second);
  }

  //sort
  sort(p.begin(), p.end());

  //swap
  rep(i,N){
    swap(p.at(i).first, p.at(i).second);
  }

  for (pair<int, int> t : p) {
    int x, y;
    tie(x, y) = t;
    cout << x << " " << y  << endl;
  }

}
