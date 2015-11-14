class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        array<char, 128> a {0}, b {0};
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
        return true;
    }
};