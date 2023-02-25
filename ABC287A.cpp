//AtCoder Today >> 230221
//A - Majority

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  int ans = 0;

  rep(i,n){
    string s;
    cin >> s;
    if(s == "For"){
      ans++;
    }else{
      ans--;
    }
  }
  if(ans > 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  
  return 0;
}