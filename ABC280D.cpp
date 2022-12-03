//AtCoder Today >> 1203
//D - Factorial and Multiple
//Real time!

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// int main(){
//   uint64_t K;
//   cin >> K;
//
//   //倍数判定の方法
//   //もし、累乗の大きさがkの半分を超えたら、正解はKでしかなくなる。はず。
//   uint64_t ex=1;//exは累乗を保存する配列。
//   int64_t khalf = K/2;
//   for(uint64_t i=1; i<=K; i++){
//     ex=ex*i;
//     if(ex%K == 0){
//       cout << i << endl;
//       return 0;
//     }else if(ex > K/2){
//       cout << K << endl;
//       return 0;
//     }
//
//   }
//
//   return 0;
// }

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long K;
    cin >> K;
    long long exp=1;
    pair& res<long long, long long> = prime_factorize(K);
    cout << K << ":";
    for (long long i=0; i<res.size(); i++){
      for(long long j=res.at(i); j>=1; j--){
        exp = j*exp;
      }
      if(exp%K==0){
        cout << ex << endl;
        return 0;
      }
    }
    return 0;
}
