//AtCoder Today >> 230307
//B - Yellow and Red Card

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n,q;
  cin >> n >> q;

  vector<int> pl(n+1);

  rep(i,q){
    int c, x;
    cin >> c >> x;

    if(c==1){
      pl[x]++;
    }

    if(c==2){
      pl[x]+=2;
    }

    if(c==3){
      if(pl[x]>=2){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
      }
    }
  }

  return 0;
}