//AtCoder Today >> 230123
//B - First Query Problem

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &al:a) cin >> al;

  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int q1;
    cin >> q1;

    if(q1 == 1){
      int k,x;
      cin >> k >> x;
      a[k-1] = x;
    }
    if(q1 == 2){
      int k;
      cin >> k;
      cout << a[k-1] << endl;
    }
  }
  return 0;
}


