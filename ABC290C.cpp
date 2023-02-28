//AtCoder Today >> 230228
//C - Max MEX

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,k;
  cin >> n >> k;

  vector<int> a(n);
  for(auto &x:a) cin >> x;

  sort(a.begin(), a.end());

  int ans=0,cnt=0;

  for(int i=0; i<n; i++){
    if(a[i] == cnt && cnt < k){
      ans++;
      cnt++;
    }else if(a[i]==cnt-1){
      continue;
    }else{
      break;
    }
  }
  cout << ans << endl;
  return 0;
}