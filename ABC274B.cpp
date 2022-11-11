//Atcoder today >> 1111
//B - Line Sensor

#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;

  vector<int> x(W,0);

  char tmp;
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cin >> tmp;
      if(tmp == '#')x.at(j)++;
    }
  }

  for(int i=0; i<W; i++){
    cout << x.at(i) << ' ';
  }
  cout << endl;

  return 0;

}
