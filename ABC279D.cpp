//AtCoder Contest real time!
//Today >> 1126
//D - Freefall

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int64_t A, B;
  cin >> A >> B;

  int sousacnt=0; //gはsousacnt+1。
  double time;
  double prevtime = INFINITY;
  while(1){
    time = B*sousacnt + A/sqrt(sousacnt+1);
    if(prevtime < time){
      printf("%.10lf\n", prevtime);
      return 0;
    }
    prevtime = time;
    sousacnt++;
  }
  return 0;
}
