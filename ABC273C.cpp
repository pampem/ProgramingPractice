//AtCoder today >> 1128
//C - (K+1)-th Largest Number

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, a;
  cin >> N;

  map<int, int> mp;
  for(int i=0; i<N; i++) cin >> a, mp[a]++;

  for(auto it = mp.rbegin(); it != mp.rend(); it++) cout << it->first << endl;
  for(int i = 1; i<=N-(int)mp.size(); i++) cout << 0 << endl;

  return 0;

}
