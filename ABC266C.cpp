//AtCoder Today >> 1214
//C - Convex Quadrilateral
//凸面四角形

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool oneeighty(pair<int, int> a, pair<int, int> b, pair<int, int> c){
  if((a.first-b.first)*(c.second-b.second) - (a.second-b.second)*(c.first-b.first) > 0) return 1;
  return 0;
}

int main(){
  pair<int, int> a, b, c, d;
  cin >> a.first >> a.second;
  cin >> b.first >> a.second;
  cin >> c.first >> c.second;
  cin >> d.first >> d.second;
  if(oneeighty(a, b, c)){
    // if(oneeighty(b,c,a)){
    //   if(oneeighty(c,d,a)){
    //     if(oneeighty(d,a,b)){
          cout << "Yes" << endl;
          return 0;
    //     }
    //   }
    // }
  }
  cout << "No" << endl;
  return 0;
}
