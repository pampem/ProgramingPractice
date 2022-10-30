#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
//row, column, 3*3boxそれぞれにおいて、1~9のrepetationがないかどうかを走査する。
//値はunordered_setに入れて、入れる時に逐一count()をすればいい。もしそのifが回ったらreturn false;

unordered_set<char> row, col;
vector<unordered_set<char>> box(9);
  for(int i=0; i<9; i++){
    row.clear();
    col.clear();


     for(int j=0; j<9; j++){

       if(board.at(i).at(j)!='.'){
         if(row.count ( board.at(i).at(j) ) ){
            return false;

         }else{
           row.insert(board.at(i).at(j));
         }
       }

       if(board.at(j).at(i)!='.'){
         if(col.count( board.at(j).at(i) ) ){
           return false;
         }else{
           col.insert(board.at(j).at(i));
         }
       }

       if(board.at(i).at(j)!='.' ){
         if(box.at((i/3)*3+j/3).count ( board.at(i).at(j) ) ){
            return false;
         }else{
           box.at((i/3)*3+j/3).insert(board.at(i).at(j));
         }
       }

     }
  }
  return true;

};


int main(){
  vector<vector<char>> board=
{{'5','9','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};

  bool ans = isValidSudoku(board);
  cout << ans << endl;

}
