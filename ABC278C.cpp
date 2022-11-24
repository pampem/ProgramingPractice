//AtCoder Today >> 1124
//C - FF (not real time)

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;

  set<pair<int, int>> st;

  for(int i=0; i<Q; i++){
    int T, A, B;
    cin >> T >> A >> B;

    if(T == 1){
      st.emplace(A,B);
    }
    if(T == 2){
      st.erase({A,B});
    }
    if(T == 3){
      if(st.count({A,B}) && st.count({B,A})){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
      }
    }

  }

  //RE when N is large
  /*
  vector<vector<int>> al(N+1, vector<int>(N+1, 0));

  for(int i=0; i<Q; i++){
    int T, A, B;
    cin >> T >> A >> B;

    if(T == 1){
      al.at(A).at(B) = 1;
    }
    if(T == 2){
      al.at(A).at(B) = 0;

    }
    if(T == 3){
      if(al.at(A).at(B)==1 && al.at(B).at(A)==1){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
      }
    }
  }*/

  return 0;
}
