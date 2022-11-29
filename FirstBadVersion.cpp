//Leet Today >> 1130
//First Bad Version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //真ん中から見る。もしtrueだったらそれより前の
        //versionにfirst bad versionが存在する。
        //もしfalseだったら、それよりも後ろのversionに
        //firstBadVersionが存在する。

        //真ん中 = (int)n/2;

        int left = 0, right = n;

        while(left < right){
          int center = left + (right - left)/2;
          if(isBadVersion(center)){
            right = center;
          }else{
            left = center+1;
          }
        }

        return left;

    }
};
