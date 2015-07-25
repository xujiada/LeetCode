#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string s = "";
		if (strs.size() == 0) return s;
		if (strs.size() == 0) return strs[0];
		for (int i = 0; i < strs[0].size(); i++)
		{
			char c = strs[0][i];
			for (int j = 1; j < strs.size(); j++)
				if (c != strs[j][i])
					return s;
			s += c;
		}
		cout << s;
	}
};