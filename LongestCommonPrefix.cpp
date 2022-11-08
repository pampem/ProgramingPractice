//LeetToday >> 221109

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n=strs.size();
      if(n==0) return "";

      string ans = "";
      sort(strs.begin(), strs.end());

      for(int i=0; i<strs.at(0).size(); i++){
        if(strs.at(0).at(i)==strs.at(n-1).at(i)){
          ans = ans + strs.at(0).at(i);
        }else{
          break;
        }
      }

      return ans;




    }

};
