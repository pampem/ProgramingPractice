//AtCoder Today >> 1203
//A - Five Integers

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  vector<int> in(5);
  vector<int> repeated;
  for(auto &a:in){
    cin >> a;
  }
  int count=0, flag=0;
  for(int i=0; i<5; i++){
    for(int j=0; j<(int)repeated.size(); j++){
      if(in[i]==repeated[j]){
        flag = 1;
        break;
      }
    }
    if(flag==0){
      repeated.push_back(in[i]);
      count++;
    }
    flag = 0;
  }

  cout << count << endl;


  return 0;
}
