//Kagami Mochi
//ABS 7th
//today >> 221101

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> d(N);

  rep(i,N){
    cin >> d.at(i);
  }

  sort(d.begin(), d.end());

  int numofsheet = 1;

  rep(i,N-1){
    if(d.at(i)!=d.at(i+1)){
      numofsheet++;
    }
  }
  // if(d.at(N-2)!=d.at(N-1))numofsheet++;


  cout << numofsheet << endl;
  return 0;

}
