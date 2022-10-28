#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


std::vector<int> plusOne(vector<int>& digits) {

     reverse(digits.begin(),digits.end());
     long int num=0;
     rep(i,digits.size()){
         num += digits.at(i)*pow(10,i);
     }
     num++;
     int sizeofnum;
     sizeofnum = to_string(num).size();
     vector<int> ans(sizeofnum);



     rep(i,sizeofnum){
         ans.at(i)=(num%(int)pow(10,i+1))/(pow(10,i));
     }

     reverse(ans.begin(),ans.end());
     rep(i,ans.size()){
       cout << ans.at(i);
     }
     cout << endl;
     return ans;

 }

 int main(){
   vector<int> digits={1,2,3};
   plusOne(digits);
 }
