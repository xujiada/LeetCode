class Solution {
public:
    bool isPalindrome(string s) {
        if ( s == "") return true;
       string ret = s;
       int i = s.size() - 1, begin = 0;
       while (i)
       {
           if (!isalnum(s[begin])) ++begin;
           else if (!isalnum(ret[i])) --i;
           else if(tolower(s[begin++]) != tolower(ret[i--])) return false;
       }
       return true;
    }
};