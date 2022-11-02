//Traveling
//ABS 10th
//today >> 221102

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  std::vector<int> t;
  std::vector<int> x;
  std::vector<int> y;

  t.push_back(0);
  x.push_back(0);
  y.push_back(0);
  bool can = true;

  for(int i=0; i<N; i++){
    int ttmp,xtmp,ytmp;
    cin >> ttmp >> xtmp >> ytmp;
    t.push_back(ttmp);
    x.push_back(xtmp);
    y.push_back(ytmp);
  }

  for(int i=1; i<N+1; i++){
    int dt = t.at(i)-t.at(i-1);
    int dist = abs(x.at(i)-x.at(i-1)) + abs(y.at(i)-y.at(i-1));

    if(dist > dt) can = false;
    if(dt%2 != dist%2) can = false;
  }

  if(can){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;

}
