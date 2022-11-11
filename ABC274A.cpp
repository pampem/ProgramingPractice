//Atcoder today >> 1111
//A - Batting Average

#include<bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;

  double ans;
  ans = (double)B/A;

  //printf("%.3f\n", ans);
  cout << fixed << setprecision(3) << ans << endl;
}
