//AtCoder Today >> 1220
//B - Let's Get a Perfect Score

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,m;
  cin >> n >> m;

  vector<string> s(n);
  for(auto &S:s){
    cin >> S;
  }

  //2分探索
  int cnt = 0;
  int tmp = 0;

  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      for(int k=0; k<m; k++){
        if(s.at(i)[k] == 'o' || s.at(j)[k] == 'o'){
          tmp++;
        }
      }
      if(tmp==m){
        cnt++;
      }
      tmp = 0;
    }
  }

  cout << cnt << endl;
  return 0;
}
