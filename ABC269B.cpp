//AtCoder Today >> 1202
//B - Rectangle Detection

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  vector<string> S(10);
  for(auto &s:S){
    cin >> s;
  }

  int A, B, C, D;
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        if(S[i][j] == '#'){
          A = i+1, C = j+1;
          int x = j;
          while(1){ //この行を右端まで見る
            if(x == 10){
              D = 10;
              break;
            }
            if(S[i][x]=='.'){
              D = x;
              break;
            }
            x++;
          }

          x = i;
          while(1){ //この列を右端まで見る
            if(x == 10){
              B = 10;
              break;
            }
            if(S[x][j]=='.'){
              B = x;
              break;
            }
            x++;
          }

          cout << A << " " << B << endl;
          cout << C << " " << D << endl;
          return 0;

      }
    }
  }



  return -1;
}
