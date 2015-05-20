#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		int i, j, result = 0;
		for (i = 0; s[i] != '\0'; i++)
		{
			j = i + 1;
			if (s[i] == 'M')
				result += 1000;

			else if (s[i] == 'D')
				result += 500;

			else if (s[i] == 'C')
			{
				if (s[j] == 'D')
				{
					result += 400;
					i += 1;
				}
				else if (s[j] == 'M')
				{
					result += 900;
					i += 1;
				}
				else
					result += 100;

			}


			else if (s[i] == 'L')
				result += 50;

			else if (s[i] == 'X')
			{
				if (s[j] == 'L')
				{
					result += 40;
					i += 1;
				}
				else if (s[j] == 'C')
				{
					result += 90;
					i += 1;
				}
				else
					result += 10;
			}


			else if (s[i] == 'V')
				result += 5;

			else //if(s[i] = 'I')
			{
				if (s[j] == 'V')
				{
					result += 4;
					i += 1;
				}
				else if (s[j] == 'X')
				{
					result += 9;
					i += 1;
				}
				else
					result += 1;
			}


		}
		return result;
		
	}
	
};