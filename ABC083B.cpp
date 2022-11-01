//Some Sums
//ABS 5th
//today >> 221101

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N, A, B ,ans=0;
  cin >>N >> A >> B;



  for(int i=1; i<=N; i++){
    int n=i;
    int sum = 0;
    while(n>0){
      sum += n%10;
      n/=10;
    }
    if(A<=sum && sum<=B) ans+=i;




    }

  cout << ans << endl;

  return 0;

}
