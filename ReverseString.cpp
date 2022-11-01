//LeetToday >> 221101
//Write a function that reverses a string. The input string is given as an array of characters s.
//You must do this by modifying the input array in-place with O(1) extra memory.

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
      //reverse(s.begin(),s.end()); //これだけでいけるんだけどね。

      int i=0;
      int j=s.size()-1;
      while(i<j){
        char tmp = s.at(i);
        s.at(i)=s.at(j);
        s.at(j)=tmp;
        i++; j--;
      }

    }
};
