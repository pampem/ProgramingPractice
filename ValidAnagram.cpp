//Leet today >> 1104
//Valid Anagram


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sm;
        unordered_map<char, int> tm;
        if(s.size() != t.size()) return false;

        for(int i=0; i<s.size(); i++){ //この時点でsとtの大きさが同じことが保証されている。
          sm[s.at(i)]++;
          tm[t.at(i)]++;
        }


        if(sm==tm){
          cout << i << endl;
          return true;
        }



        return false;
    }
};
