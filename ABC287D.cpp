//AtCoder Today >> 230225
//D - Match or Not

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool match(char a, char b){
  return a=='?' || b=='?' || a==b;
}

int main(){
  string s,t;
  cin >> s >> t;

  vector<int> pre(s.size()+1, false), suf(s.size()+1, false);

  pre[0] = true;
  for(int i=0; i<t.size(); i++){
    if(!match(s.[i],t[i])) break;
    pre[i+1] = true;
  }

  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());

  suf[0] = true;
  for(int i=0; i<t.size(); i++){
    if(!match(s[i],t[i])) break;
    suf[i+1] = true;
  }

  for(int i=0; i<=t.size(); i++){
    if(pre[i] && suf(t.size()-i)) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}


//これはTLEのコード。制約大きかったね。
// int main(){
//   string s,t;
//   cin >> s >> t;
  
//   int n = t.size();
//   int m = s.size();
//   rep(x,n+1){
//     string sdash;
//     rep(i,x){
//      sdash += s[i];
//     }
//     for(int i=m-(n-x); i<m; i++){
//       sdash += s[i];
//     }

//     //sdashとtの?を除いた部分が一致するかどうかを判定する。

//     rep(i,n){
//       if(sdash[i] != '?' && t[i] != '?' && sdash[i] != t[i]){
//         cout << "No" << endl;
//         //cout << sdash << endl;
//         break;
//       }
//       if(i==n-1){
//         cout << "Yes" << endl;
//         //cout << sdash << endl;
//       }
//     }
//   }
//   return 0;
// }