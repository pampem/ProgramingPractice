//LeetCode 221030*alt for221029

#include <bits/stdc++.h>
using namespace std;

//学んだこと；要素数を指定せずに宣言した配列では、at()で値を代入することはできない。push_backを使うと大丈夫。
//vectorは、vector と書かなくても、{}と書けばvectorになる。
// だから、vectorが戻り値の関数で、エラー時にはreturn {-1}とでも書けばよい。もしくはreturn {}でもよい。
//return 0はだめ。int だから。
//return nullが最適解じゃん。LeetCode様々。いや、nullptrは使わないほうがよさげ。c++ではうまくいかない。サンプルはjavaだったからnull使ってたけど。
//mapは、find()とcount()がある。findは、あるとイテレータを返す。countはbool。

//First build;
// std::vector<int> twoSum(vector<int>& nums, int target)
// {
//
//   vector<int> comp,ans(2); //complements
//   comp.push_back(target - nums.at(0));
//
//   if(nums.size()>1){
//     for(int i=1; i<nums.size(); i++){
//       comp.push_back(target - nums.at(i));
//       for(int p=0; p<i; p++){
//         if(comp.at(p)==nums.at(i)){
//           ans.at(0)=p;
//           ans.at(1)=i;
//           return ans;
//         }
//       }
//     }
//   }
//
//   cout << "nothing found" << endl;
//   return {-1};
//
// }

//Second build; hash map
std::vector<int> twoSum(vector<int>& nums, int target){
  unordered_map<int, int> mp;
  for(int i=0; i<nums.size(); i++){
    int complement = target - nums.at(i);
    if(mp.count(complement)){
      return {i, mp.at(complement)};
    }
    mp[nums.at(i)] = i;
  }

  return nullptr;
}

 int main(){
   vector<int> nums={2,9,11,15};
   int target = 9;
   vector<int> ans = twoSum(nums,target);
   for(auto i : ans){
     cout << i << endl;
   }


 }
