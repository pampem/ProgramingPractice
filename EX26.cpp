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

string read_name(){
  string s,b;
  cin >> s >> b;
  return s;
}

// int式の項を1つ読み取る。
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
int read_int(map<string, int> &var_int){
  string s;
  cin >> s;

  return isdigit(s.at(0)) ? stoi(s) : var_int.at(s);
}

int calc_int(map<string, int> &var_int){
  string symbol = "";
  int result = 0;

  while(symbol != ";"){
    int val = read_int(var_int);

    if(symbol == ""){
      result = val;
    }
    if(symbol == "+"){
      result += val;
    }
    if(symbol== "-"){
      result -= val;
    }

    cin >> symbol;

  }
  return result;
}

vector<int> read_vec_val(map<string, int> &var_int){
  vector<int> result;
  string symbol = "";

  while(symbol != "]"){
    int val = read_int(var_int);
    result.push_back(val);

    cin >> symbol;
  }

  return result;
}

vector<int> read_vec(map<string, int> &var_int, map<string,vector<int>> &var_vec){
  string val;
  cin >> val;

  return val == "["
              ? read_vec_val(var_int)
              : var_vec.at(val);
}

vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){
  string symbol = "";
  vector<int> result;

  while(symbol != ";"){
    vector<int> vec = read_vec(var_int, var_vec);

    if(symbol == ""){
      result = vec;
    }
    if(symbol == "+"){
      for(int i=0; i<result.size(); i++){
        result.at(i) += vec.at(i);
      }
    }
    if(symbol == "-"){
      for(int i=0; i<result.size(); i++){
        result.at(i) -= vec.at(i);
      }
    }
    cin >> symbol;
  }
  return result;

}

int main(){
  int N;
  cin >> N;

  map<string, int> var_int;
  map<string, vector<int>> var_vec;

  for(int i=0; i<N; i++){
    string s;
    cin >> s;

    if(s == "int"){
      string name = read_name();
      var_int[name] = calc_int(var_int);
    }

    if(s == "vec"){
      string name = read_name();
      var_vec[name] = calc_vec(var_int, var_vec);

    }

    if(s == "print_int"){
      cout << calc_int(var_int) << endl;
    }

    if(s == "print_vec"){
      print_vec(calc_vec(var_int, var_vec));
    }

  }




}
