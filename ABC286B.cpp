//AtCoder Today >> 230219
//B - Cat

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  while(1){
    int i=s.find("na");
    if(i==-1)break;
    s.replace(i,2,"nya");
  }
  cout << s << endl;

  // int i=0;
  // while(1){
  //   if(s[i]=='n' && s[i+1]=='a'){
  //     cout << "nya";
  //     i++;i++;
  //   }else{
  //     cout << s[i];
  //     i++;
  //   }
  //   if(i>=n-1 && (s[i-1]!='n' || s[i]!='a')) cout << s[n-1];
  //   if(i>=n-1)break;
  // }
  // cout << endl;
  return 0;
}