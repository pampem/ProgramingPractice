//AtCoder Today >> 1129
//C - Max Even

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> odd, even;

  for(auto &a:A){
    cin >> a;

    if(a & 1)// when a == odd
      odd.push_back(a);
    else
      even.push_back(a);
  }
  int maxeven=-1;
  sort(odd.rbegin(),odd.rend()); //降順に並べる。
  sort(even.rbegin(),even.rend());

  if(odd.size() >= 2) maxeven = max(maxeven, odd[0]+odd[1]);
  if(even.size() >= 2) maxeven = max(maxeven, even[0]+even[1]);
  cout << maxeven << endl;

  // sort(A.begin(), A.end());
  //
  // if(N >= 3){
  //   vector<int> calc;
  //   for(int i=(int)A.size()-1; i>=(int)A.size()-3; i--){
  //     calc.push_back(A.at(i));
  //   }
  //   //calcには、Aが昇順で入っている。
  //   //3要素の並び替え、8通りをifで全列挙もいいが、、、
  //   int c0=calc[0]%2, c1=calc[1]%2, c2=calc[2]%2;
  //   //あー、これ、c2がバカでかくて、c0,c1がちっちゃいときにACできないわ。
  //
  //   if(c2==0){
  //     if(c1==0){ //c0 = ?, c1 = 0, c2 = 0
  //       maxeven = calc[1]+calc[2]; //even + even
  //     }else{ //c1==1
  //       if(c0==0){ //c0 = 0, c1 = 1, c2 = 0
  //         maxeven = calc[0]+calc[2]; //odd + odd
  //       }else{ //c0 = 1, c1 = 1, c2 = 0
  //         maxeven = calc[0]+calc[1]; //odd + odd
  //       }
  //     }
  //   }else{ //c2 = 1
  //     if(c1==1){ //c0 = ?, c1 = 1, c2 = 1
  //       maxeven = calc[1]+calc[2];
  //     }else{ //c1 == 0
  //       if(c0 == 0){ //c0 = 0, c1 = 0, c2 = 1
  //         maxeven = calc[0]+calc[1];
  //       }else{ //c0 = 1, c1 = 0, c2 = 1
  //         maxeven = calc[0]+calc[2];
  //       }
  //     }
  //   }
  //
  // }else{ //2要素のときonly (N=1は存在しない)
  //   if(A[0]%2){
  //     if(A[1]%2){//odd + odd
  //       maxeven = A[0]+A[1];
  //     }
  //   }else{
  //     if(A[1]%2==0){//even + even
  //       maxeven = A[0]+A[1];
  //     }
  //   }
  // }
  //
  // cout << maxeven << endl;
  //
  // // map<int, bool> mp;
  // // for(int i=0; i<N; i++){
  // //   int tmp;
  // //   cin >> tmp;
  // //   tmp%2 ? mp[tmp] = 0 : mp[tmp] = 1; //even = 1, odd = 0;
  // // }

  return 0;
}
