//Leet today >> 1107
//Implement strStr()
//strStr()はcの関数っぽい。


class Solution {
public:
    int strStr(string haystack, string needle) {
       if(haystack.size() < needle.size()) return -1;//針のほうが大きいときは-1
       if(haystack.size()==1 && haystack[0]==needle[0])return 0;

       for(int i=0; i<haystack.size(); i++){
         if(haystack[i]!=needle[0])continue;
         else{
           for(int j=0; j<needle.size(); j++){//j=0はすでに見てるから、といってjを1から始めるとneedle.size()が1のとき困る。
             if(haystack[j+i]!=needle[j])break;
             if(j==needle.size()-1)return i;
           }
         }
       }
       return -1;

    }
};
