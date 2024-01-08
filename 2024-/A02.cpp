//Tessoku-book today >> 240108

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  cin >> n >> x;
  int tmp;
  for(int i=0;i<n;i++){
    cin >> tmp;
    if(tmp==x){
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;

  return 0;
}
