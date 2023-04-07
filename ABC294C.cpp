//AtCoder Today >> 230319
//C - Merge Sequences

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,m;
  cin >> n >> m;

  vector<int> a(n);
  vector<int> b(m);
  rep(i,n) cin >> a[i];
  for(auto &x:b) cin >> x;

  vector<int> merged = a;

  merged.insert(merged.end(), b.begin(), b.end());

  sort(merged.begin(),merged.end());
  
  rep(i,n){
    int out = (int)find(a.begin(), a.end(), acpy[i]);
    cout << out << ' ';
  }
  cout << endl;
  rep(i,m){

  }
  cout << endl;

  for(auto &x:a) cout << x << ' ';
  cout << endl;

  return 0;
}