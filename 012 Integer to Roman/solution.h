#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string intToRoman(int num) {
		/*   I、V、X、  L、C、   D 、 M
		代表1、  5、10、50、100、500、1000
		再应用左减右加的原理,2013=MMXIII */
		string s;
		int i, a, b, c, d;
		a = num / 1000;
		b = num / 100 % 10;
		c = num / 10 % 10;
		d = num % 10;

		for (i = 0; i < a; i++)
			s += 'M';

		if (b < 4)
			for (i = 0; i < b; i++)
				s += 'C';
		else if (b == 4)
			s += "CD";
		else if (b < 9)
		{
			s += 'D';
			for (i = 5; i < b; i++)
				s += 'C';
		}
		else
			s += "CM";

		if (c < 4)
			for (i = 0; i < c; i++)
				s += 'X';
		else if (c == 4)
			s += "XL";
		else if (c < 9)
		{
			s += 'L';
			for (i = 5; i < c; i++)
				s += 'X';
		}
		else
			s += "XC";

		if (d < 4)
			for (i = 0; i < d; i++)
				s += 'I';
		else if (d == 4)
			s += "IV";
		else if (d < 9)
		{
			s += 'V';
			for (i = 5; i < d; i++)
				s += 'I';
		}
		else
			s += "IX";

		cout << s << endl;
		return 0;
	}
};