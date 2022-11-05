//Leet today >> 1105
//Valid Palindrome

//alphanumeric = 英数字
//palindrome = 回分

//How to delete all the non-alphanumeric letters.
//After removing all the non-alphanumeric letters, then invert the word.
//If inverted word = just after removing word, then return true.
//Otherwise false

//Alphanumeric;
//Uppercase letters: A to Z.
//Lowercase letters: a to z.
//Digits: 0 to 9.

//intでA < c < zいけるっけ。charのままでいける!
//でも、isupperとislowerとisdigitがある。

class Solution {
public:
    bool isPalindrome(string s) {
      string cpy;
      for(int i=0; i<s.size(); i++){
        if(islower(s[i])||isdigit(s[i])) {
          cpy.push_back(s[i]);
        }else if(isupper(s[i])){
          cpy.push_back(tolower(s[i]));
        }
      }
      string nonalpha = cpy;
      reverse(cpy.begin(),cpy.end());
      if(nonalpha == cpy)return true;
      return false;

    }
};
