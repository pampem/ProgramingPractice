#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  vector<int> height(3);
  height.at(0)=A;
  height.at(1)=B;
  height.at(2)=C;
  sort(height.begin(),height.end());

  cout<<height.at(2)-height.at(0)<<endl;

  return 0;
}
