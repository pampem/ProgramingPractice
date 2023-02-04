//AtCoder Today >> 230204
//A - Many A+B Problems
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<vector<int>> A(2);
  rep(i, N){
    int a, b;
    cin >> a >> b;
    A[0].push_back(a);
    A[1].push_back(b);
    cout << A[0][i] + A[1][i] << endl;
  }


  
  return 0;
}
