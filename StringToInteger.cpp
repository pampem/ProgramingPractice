//Leet today >> 1107
//absent at 1106, so today I have to solve 2 leet questions.
//String to integer (atoi)


class Solution {
public:
    int myAtoi(string s) {
      int ans = 0;
      int flag = 1;
      //int over = 0;
      int i = 0;
      while(s[i] == ' '){
        i++;
      }

      if(s[i] == '+'){
        flag = 1;
        i++;
      }else if(s[i] == '-'){
        flag = -1;
        i++;
      }

      while('0' <= s[i] && s[i] <= '9'){
        if (ans >  INT_MAX / 10 || (ans == INT_MAX / 10 && s[i] - '0' > INT_MAX%10)) {
          if (flag == 1) return INT_MAX;
          else return INT_MIN;
        }
      ans *= 10; //もし桁が0以外で存在したら繰り上げる
      ans += s[i]-'0'; //これ(int)s[i]って書いたらいけない。s[i]-'0'とすることでいける。
      i++;
      }
      return ans*flag;
    }
};
