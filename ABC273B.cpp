//AtCoder today >> 1118
//B - Broken Rounding

#include<bits/stdc++.h>
using namespace std;

int main(){
  uint64_t X, K;

  cin >> X >> K;

  for(int i=0; i<K; i++){
    X /= pow(10,i);
    if(X % 10 <= 4){
      X -= X%10;
    }else{
      X += 10-X%10;
    }
    X *= pow(10,i);
  }
  cout << X << endl;
}
