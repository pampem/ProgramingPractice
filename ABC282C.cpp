//AtCoder Today >> 1220
//C - String Delimiter

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  int cntofdec=0;

  for(int i=0; i<n; i++){
    if(s[i]=='"') cntofdec++;
    if(cntofdec%2==0 && s[i]==',') s[i] = '.';
  }

  cout << s << endl;
  return 0;
}
