#include "solution.h"
int main()
{
	string s;
	cout << "please input a Roman Number" << endl;
	cin >> s;
	Solution val;
	cout << val.romanToInt(s);
	
	return 0;
}