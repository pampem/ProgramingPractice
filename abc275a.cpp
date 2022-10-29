//Find Takahashi

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> Height(N);
  rep(i,N){
    cin >> Height.at(i);
  }

  vector<int> copy(N);
  copy = Height;

  sort(copy.begin(), copy.end());

  rep(i,N){
    if(copy.at(N-1)==Height.at(i)) cout<<i+1<<endl;
  }
  return 0;

}
