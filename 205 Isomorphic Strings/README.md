Isomorphic Strings
=
Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

For example,
Given "egg", "add", return true.

Given "foo", "bar", return false.

Given "paper", "title", return true.

Note:
You may assume both s and t have the same length.

一开始的做法是：

 bool isIsomorphic(string s, string t) { <br>
        if (s.size() != t.size()) <br>
            return false;  <br>
        int a = 0, b = 0; <br>
        for (int i = 1,j=1; i < s.size(); i++,j++)  <br>
        { <br>
            if(s[i] == '\\') <br>
                i++; <br>
            if(s[j] == '\\') <br>
                j++; <br>
            if(s[i] == s[i-1]) <br>
                a++; <br>
            else <br>
                a = 0; <br>
            if(t[j] == t[j-1]) <br>
                b++; <br>
            else  <br>
                b = 0; <br>
            if(a != b) <br>
                return false; <br>
        } <br>
        
        return true; <br>
    } 
    一直会有一个不通过，应该是"\\"的问题。。。
    
    
    最后的循环是：
     for(int i = 0; i < s.size(); i++)
        {
            char sc = s[i], tc = t[i];
            if(a[sc] == 0 && b[tc] == 0)
            {
                a[sc] = tc;
                b[tc] = sc;
            }
            else if(a[sc] != tc)
                return false;
            else if(b[tc] != sc)
                return false;
        }
