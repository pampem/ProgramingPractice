#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void rotate(vector<vector<int>>& matrix) {


  reverse(matrix.begin(), matrix.end());

  for(int i=0; i<matrix.size(); ++i){
    for(int j=i; j<matrix.size(); ++j){
      swap(matrix.at(i).at(j), matrix.at(j).at(i));
    }
  }


  rep(j,matrix.size()){
    rep(i,matrix.at(0).size()){
      cout << matrix.at(j).at(i);
      if(i==matrix.size()-1)cout<<endl;
    }
  }


}


int main(){
  vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
  rotate(matrix);
}
