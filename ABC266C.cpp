//AtCoder Today >> 230302
//C - Convex Quadrilateral
//凸面四角形

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//方針- 外積による180度より大きいか小さいか、イコールかの判定

struct V{
  int x,y;
  V(int x=0, int y=0): x(x), y(y){}
  V operator-(const V& a) const{
    return V(x-a.x, y-a.y);
  }
  int cross(const V& a) const{
    return x*a.y - y*a.x;
  }
  int ccw(const V& a) const{
    int area = cross(a);
    if(area > 0) return +1; //ccw Counter Clockwise Rotation
    if(area < 0) return -1; //cw Clockwise Rotation
    return 0; //collinear
  }
};

int main(){
  vector<V> p(4);
  rep(i,4) cin >> p[i].x >> p[i].y;
  rep(i,4) {
    V A = p[i];
    V B = p[(i+1)%4];
    V C = p[(i+2)%4];
    V b = B-A, c = C-A; //4角について図るために、rep 4 で%を使っている。外積の解説については公式解説参照。
    if(b.ccw(c) != 1){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}