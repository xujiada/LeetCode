#include <iostream>
using namespace std;
int myAtoi(char *str) {
	int sign, j = 0;
	long  i;
	for (; isspace(*str); str++)
		;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	for (i = 0; isdigit(*str); str++)
	{
		i = 10 * i + *str - '0';
		j++;
	}
	if (j > 10) return (sign == 1) ? INT_MAX : INT_MIN;
	i = i * sign;
	if (i >  INT_MAX)
		cout << INT_MAX;
	if (i <  INT_MIN)
		cout << INT_MIN;

	cout << i;
}