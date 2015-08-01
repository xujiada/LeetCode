#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		stack<char> e;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
				e.push(s[i]);
			else{
				if (e.empty() || s[i] - e.top()>3 || s[i] - e.top()<-3) //Ϊʲôһ��Ҫ��e.enpty()����ǰ�����ȷ
					return false;
				else
					e.pop();
			}
		}
		cout << e.empty();

	}
};