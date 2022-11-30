//AtCoder Today >> 1130
//B - Maintain Multiple Sequences

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N, Q;
  cin >> N >> Q;

  vector<vector<int>> a(N);
  for(int i=0; i<N; i++){
    int L;
    cin >> L;
    for(int j=0; j<L; j++){
      int tmp;
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }

  for(int i=0; i<Q; i++){
    int s, t;
    cin >> s >> t;

    cout << a[s-1][t-1] << endl;
  }

  return 0;
}
