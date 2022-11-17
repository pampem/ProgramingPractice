//AtCoder today >> 1115
//A - Recursive Function


#include<bits/stdc++.h>
using namespace std;

int RecursiveFunction(int k){
  if(k == 0) return 1;
  if(k > 0)
    return k*RecursiveFunction(k-1);
  return -1;
}

int main(){
  int N;
  cin >> N;

  cout << RecursiveFunction(N) <<endl;

}
