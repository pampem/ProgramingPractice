#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


std::vector<int> plusOne(vector<int>& digits) {
     int i=digits.size()-1;
     digits.at(i)++;
     for(i=digits.size()-1; i>0; i--){
       if(digits.at(i)==10){
          digits.at(i)=0;
          digits.at(i-1)++;
       }else{
         break;
       }
     }
     if((i==0) && (digits.at(i)==10)){
       digits.at(i)=0;
       reverse(digits.begin(),digits.end());
       digits.push_back(1);
       reverse(digits.begin(),digits.end());

     }

     rep(i,digits.size()){
       cout << digits.at(i);
     }
     cout << endl;
     return digits;

 }

 int main(){
   vector<int> digits={9,9,9};
   plusOne(digits);
 }
