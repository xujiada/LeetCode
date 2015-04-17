#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string convert(string s, int nRows) {
		int i, j;
		string result;
		int len = s.length();
		if (nRows == 1) return s;
		for (i = 0; i < nRows; i++)
		{
			j = 0;
			while (j < i + len){
				if (i < nRows - 1 && i>0 && j>i)
					result += s.at(j - i);
				if (j + i < len)         //输出出了中间行的数字
					result += s.at(j + i);

				j += 2 * nRows - 2;
			}
		}
		cout << result;
	}
};