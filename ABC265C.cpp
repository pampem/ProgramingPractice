//AtCoder Today >> 1217
//C - Belt Conveyor

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int H, W;
  cin >> H >> W;

  vector<string> vec(H);
  rep(i,H){
    cin >> vec[i];
  }

  pair<int, int> place = {1,1};
  int count=0;
  while(count<=H*W){
    char c = vec[place.first-1][place.second-1];
    if(c == 'U'){
      if(place.first==1){
        cout << place.first << " " << place.second;
        return 0;
      }
      place.first--;
    }else if(c == 'D'){
      if(place.first==H){
        cout << place.first << " " << place.second;
        return 0;
      }
      place.first++;
    }else if(c == 'L'){
      if(place.second==1){
        cout << place.first << " " << place.second;
        return 0;
      }
      place.second--;
    }else if(c == 'R'){
      if(place.second==W){
        cout << place.first << " " << place.second;
        return 0;
      }
      place.second++;
    }
    count++;
  }

  cout << -1 << endl;
  return 0;
}
