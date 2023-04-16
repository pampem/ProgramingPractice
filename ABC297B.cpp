//AtCoder Today >> 2304015
//B - chess960

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string s;
  cin >> s;

  int bindex=0;
  int rindex1=0, rindex2;
  int kindex;

  rep(i,8){
    if(s[i]=='B'){
      if(!bindex){
        bindex = i+1;
        for(int j=i+1; j<8; j++){
          if(s[j]=='B'){
            if((bindex % 2)==((j+1) % 2)){
              cout << "No" << endl;
              return 0;
            }
          }
        }
      }
      
    }

    if(s[i]=='R'){
      if(!rindex1){
        rindex1 = i+1;
        for(int j=i; j<8; j++){
          if(s[j]=='R'){
            rindex2 = j+1;
          }
        }
      }
    }

    if(s[i]=='K'){
      kindex = i+1;
    }

  }

  if((rindex1 < kindex) && (kindex < rindex2)) cout << "Yes" << endl;
  else cout << "No" << endl;

  //cout << bindex << rindex1 << rindex2 << kindex << endl;
  return 0;
}