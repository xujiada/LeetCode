#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		string result;
		int len = 0;
		int i;
		for (i = 0; i < s.size(); i++)
		{
			int pos = result.find(s[i]);
			if (pos >= 0)
			{
				len = len >= result.size() ? len : result.size();  //����һ��
				result.erase(result.begin(), result.begin() + pos + 1);
			}
			//else  ������һ��
			result += s[i];
		}
		int j = (len >= result.size() )? len : result.size();
		cout << j << endl;
		return 0;
	}
};