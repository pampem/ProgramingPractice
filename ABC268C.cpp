//AtCoder Today >> 1208
//C - Chinese Restaurant

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> p(N);
  for(int i=0; i<N; i++)cin >> p[i];

  vector<int> cnt(N,0);
  for(int i=0; i<N; i++){
    for(int j=0; j<3; j++){
      cnt[(p[i]-1-i+j+N)%N]++;
    }
  }

  int ans=0;
  for(int i=0; i<N; i++)ans = max(ans, cnt[i]);

  cout << ans << endl;

  return 0;
}
