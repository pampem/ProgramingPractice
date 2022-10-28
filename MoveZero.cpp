#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


void moveZeroes(vector<int>& nums)
{
	for(int i=0,next=0;i<nums.size();++i) //前置インクリメントと、後置インクリメントの違い。
		if(nums[i]!=0){
      	swap(nums[i],nums[next++]); //next++は、nextを返す。返したあとに、++をするらしい。
        cout << next << endl;
    }

}

 int main(){
   vector<int> nums={0, 1, 0, 3, 12};
   moveZeroes(nums);
   rep(i,nums.size()){
     cout<<nums.at(i)<<endl;
   }
 }
