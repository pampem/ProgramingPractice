//AtCoder Today >> 230109
//C - Train Ticket

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main(){
  string N;
  cin >> N;

  for(int i=0; i< (1<<3); i++){
    int sum = N[0]-'0';
    for(int j=0; j<3; j++){
      if(i & (1<<j)) sum += N[j+1]-'0';
      else sum -= N[j+1]-'0';
    }
    if(sum == 7){
      cout << N[0];
      for(int j=0; j<3; j++){
        if(i & (1<<j)) cout << "+";
        else cout << "-";
        cout << N[j+1];
      }
      cout << "=7" << endl;
      return 0;
    }
  }

  return 0;
}
