//AtCoder Today >> 230228
//B - Qual B

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,k;
  cin >> n >> k;

  string s;
  cin >> s;
  int cnt = 0;
  rep(i,n){
    if(s[i]=='o' && cnt < k){
      cout << 'o';
      cnt++;
    }else{
      cout << 'x';
    }
  }
  cout << endl;
  return 0;
}