//AtCoder Today >> 1114
//D - Takahashi's solitaire

#include<bits/stdc++.h>
using namespace std;


int main(){
  int N, M;
  cin >> N >> M;

  vector<int> v(N);

  for(int i=0; i<N; i++){
    cin >> v.at(i);
  }

  int ans=INT_MAX;

  for(int i=0; i<N; i++){
    vector<int> cpy = v;
    int pick = cpy.at(i);
    cpy.erase(cpy.begin() + i);

    for(int j=0; j<N; j++){
      if( count(cpy.begin(), cpy.end(), pick)){//vにpickと同じ値が存在したら。
        //pick は変更なし
        cpy.erase(find(cpy.begin(),cpy.end(),pick));
      }else if(count(cpy.begin(), cpy.end(), (pick+1) % M)) {//pickが存在しなかったら、pick+1のmod Mが書かれたカードがあるかを探す。
        pick = (pick+1) % M;
        cpy.erase(find(cpy.begin(),cpy.end(),pick));
      }else{//選べるカードがなくなったら。
        int tmp = accumulate(cpy.begin(), cpy.end(), 0);
        if(ans > tmp) ans = tmp;
        break;
      }
    }

  }
  cout << ans << endl;


  return 0;
}
