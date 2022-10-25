#include<iostream>
using namespace std;
#include <cstdlib>
#include <cmath>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> point(N);

  for(int i=0; i<N; i++){
    cin >> point.at(i);
  }

  int comp=0;
  for(int i=0; i<N; i++){
    comp +=point.at(i);
  }

  rep(i,N){
      int ans=0;
      ans = abs(comp/N-point.at(i));
      cout << ans << endl;
  }
  return 0;
}
