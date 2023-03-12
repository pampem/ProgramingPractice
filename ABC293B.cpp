//AtCoder Today >> 230311
//B - Call the ID Number

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &x:a){
    cin >> x;
  }

  vector<bool> seen(n);

  rep(i,n){
    if(seen[i]) continue;

    seen[a[i]-1] = true;

  }

  int ct = (int)count(seen.begin(), seen.end(), 0);
  cout << ct << endl;
  rep(i,n){
    if(!seen[i]) cout << i+1 <<' ';
  }
  cout << endl;
  
  return 0;
}