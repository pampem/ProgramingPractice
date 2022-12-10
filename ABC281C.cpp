//AtCoder Today >> 1210
//C - Circular Playlist
//Real time! (unrated)

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  int64_t T, circular = 0;
  cin >> N >> T;

  vector<int> A(N);

  for(auto &a:A){
    cin >> a;
    circular += a;
  }
  int64_t count = T % circular;

  for(int i=0; i<N; i++){
    count -= A[i];
    if(count<0){
      count += A[i];
      cout << i+1 << " " << count;
      return 0;
    }
  }

  return 0;
}
