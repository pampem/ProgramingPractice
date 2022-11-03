//Leet today >> 221102
//First Unique Character in a string
//hash map 使えよバカ

class Solution {
public:
    int firstUniqChar(string s) {
      map<char, int> um;

      for(int i=0; i<s.size(); i++){
        char tmp = s.at(i);
        if(um.count(tmp)){
          um[tmp]++;
        }else{
          um[tmp] = 1;
        }
      }

      for(int i=0; i<s.size(); i++){
        if(um.at(s.at(i))==1){
          return i;
        }
      }



      return -1;



    }
};
