//Counting Squares

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
  vector<vector<char>> S(9, vector<char>(9));
  for(int i=0;i<9; i++){
    for(int j=0;j<9;j++){
      cin>>S.at(i).at(j);
    }
  }

  std::vector<vector<vector<int>>> v(3, vector<vector<int>>(83,vector<int>(83)));
  int ans=0;
  rep2(i,0,9){
    rep2(j,0,9){
      if(S.at(i).at(j)=='#'){
        rep2(k,0,9){
          rep2(l,0,9){
            if(S.at(k).at(l)=='#'){
              if(i==k&&j==l)break;
              v.at(0).at(k*l).at(i*j)=sqrt((i-k)*(i-k)+(j-l)*(j-l));
              v.at(1).at(k*l).at(i*j)=abs(k-i);
              v.at(2).at(k*l).at(i*j)=abs(l-j);

            }
          }
        }
      }
    }
  }

  rep(i,82){
    rep(j,82){
      if(v.at(0).at(j).at(i)!=0){
        rep(k,83){
          rep(l,83){
            if(i==k&&j==l)break;

            if(v.at(0).at(j).at(i)==v.at(0).at(k).at(l)){
              if(v.at(1).at(j).at(i)==v.at(1).at(k).at(l)){
                if(v.at(2).at(j).at(i)==v.at(2).at(k).at(l)){

                  ans++;
                }
              }
            }
            //if end
          }
        }

      }

    }
  }
  ans/=23;
  cout<<ans<<endl;

}
