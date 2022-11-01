//AC Beginners Selection 3rd problem.
//Today >> 221101


#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
  int n,cnt=-1,flag=1;
  cin >> n;

  vector<int> num;

  rep(i,n){
    int tmp;
    cin >> tmp;
    num.push_back(tmp);
  }

  while(flag==1){
    for(int i=0; i<n; i++){
      if((num.at(i)%2)!=0){
        flag=0;
        break;
      }else{
        num.at(i) /= 2;
      }
    }
    cnt++;


  }


  cout << cnt << endl;


}
