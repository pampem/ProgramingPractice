//AtCoder Today >> 1203
//B - Inverse Prefix Sum
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> S(N);
  for(auto &s:S){
    cin >> s;
  }

  int prevsum = 0; //Aの値を全部足したもの
  for(int i=0; i<N; i++){
    int A = S[i]-prevsum;
    prevsum += A;
    cout << A << " ";
  }

  return 0;
}
