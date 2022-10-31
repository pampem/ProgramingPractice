#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}


int main(){
  int N;
  cin >> N;

  map<string, int> var_int;
  map<string, vector<int>> var_vec;

  for(i=0; i<N; i++){
    string s;
    cin >> s;

    if(s == "int"){
      string name = read_name();
      var_int[name] = calc_int(var_int);
    }

    if(s == "vec"){


    }

    if(s == "print_int"){

    }

    if(s == "print_vec"){
      print_vec(calc_vec(var_int, var_vec));
    }

  }




}
