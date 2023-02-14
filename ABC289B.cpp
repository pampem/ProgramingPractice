//AtCoder Today >> 230212
//B - レ

#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  rep(i, m) cin >> a[i];

  vector<int> re(n+1);//reは0で初期化
  for(auto &x:a){
    re[x]=1;
  }

  vector<int> ans;
  for(int i=1, j=1; i<=n; i=++j){
    while(re[j]) j++;
    for(int k=j; k>=i; k--) ans.push_back(k);
  }
  rep(i, n) cout << ans[i] << " \n"[i + 1 == n];;
  return 0;
}


// vector<vector<int>> g;
// vector<bool> seen;
// //方針--連結成分を見つける。
// //連結成分の中の大きい方から順に全て表示する。
// const int N=105;
// int a[N],cnt;

// void dfs(int c){
//   seen[c]=true;
//   a[++cnt]=c;
//   for(auto x:g[c]){
//     if(seen[x])continue;
//     dfs(x);
//   }
// }

// int main(){
//   int n,m;
//   cin >> n >> m;
//   g.resize(n);
//   seen.resize(n);
//   vector<int> a(m);
//   for(auto &x:a){
//     cin >> x;
//     g[x].push_back(x+1);
//     //g[x++].push_back(x);
//   }
//   seen.assign(n,false);

//   vector<int> ans;
//   rep(i,n){
//     if(!seen[i]){ //もし未訪問なら。
//       cnt=0;
//       dfs(i);
//        sort(a+1,a+cnt+1);
//       reverse(a+1,a+cnt+1);
//       for(int j=1;j<=cnt;j++)
//         cout<<a[j]<<" ";
//     }
//   }
// }