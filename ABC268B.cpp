//AtCoder Today >> 1203
//B - Prefix?

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string s, t;
  cin >> s >> t;

  if(s.size() > t.size()){
    cout << "No" << endl;
    return 0;
  }

  for(int i=0; i<s.size(); i++){
    if(t[i]==s[i]){
      if(i==s.size()-1){
        cout << "Yes" << endl;
        return 0;
      }
    }else{
      break;
    }
  }
  cout << "No" << endl;

  return 0;
}
