//AtCoder Today >> 230218
//C - abc285_brutmhyhiizp

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;

  //  long res = 0;
  // for (auto c: s) {
  //   cout << c << endl;
  //   res *= 26;
  //   res += c - '@';
  // }
  // std::cout << res << '\n';

  int l=s.size();
  long long res=0,add=26;
  //for(int i=1;i<=l-1;i++){res+=add;add*=26;}
  long long num=0;
  for(int i=0;i<l;i++){
    num*=26;
    num+=(s[i]-'A'+1);
  }
  cout << res+num << "\n";

  return 0;
}