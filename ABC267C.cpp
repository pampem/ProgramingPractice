//AtCoder Today >> 1214
//C - Index × A(Continuous ver.)

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N, M;
  cin >> N >> M;

  vector<long long> A(N);
  for(auto &a:A) cin >> a;

  vector<long long> sum(N+1);
  for(int i=1; i<=N; i++){
    sum[i] = sum[i-1] + A[i-1];
  }

  vector<long long> sumi(N-M+1);
  long long now = 0;

  for(int i=0; i<M; i++) now+= A[i]*(i+1);
  sumi[0]=now;

  for(int i=1; i<N-M+1; i++){
    sumi[i] = sumi[i-1] + M*A[M+i-1] -(sum[M+i-1] - sum[i-1]);
  }
  long long ans = -10000000000000000ll; //long long型の整数リテラルであり、適当なでかいマイナスの値だよって意味。
  for(int i=0; i<N-M+1; i++) ans = max(ans,sumi[i]);
  cout << ans << endl;

  return 0;
}
