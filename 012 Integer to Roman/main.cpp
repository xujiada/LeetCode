#include "solution.h"
int main()
{
	int i;
	cout << "please input a number" << endl;
	cin >> i;
	Solution num;
	num.intToRoman(i);
	getchar();
	return 0;
}