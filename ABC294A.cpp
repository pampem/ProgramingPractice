//AtCoder Today >> 230319
//A - Filter

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  rep(i,n){
    int a;
    cin >> a;
    if(a%2==0)cout << a << ' ';
  }
  cout << endl;
  return 0;
}