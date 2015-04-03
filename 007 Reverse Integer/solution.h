#include <iostream>
#include <stdio.h>
int reverse(int x) {
	int sign = x > 0 ? 1 : -1;
	int i;
	long result = 0;  //retult得设置为long类型，否则会出错
	x = x * sign;
	while (x != 0)
	{
		i = x % 10;
		x = x / 10;
		result = 10 * result + i;
	}
	// result = sign * result;
	if (result > 0x7FFFFFFF || result < (-0x7FFFFFFF - 1))  //考虑溢出的情况
		return 0;
	else
		std::cout << sign * result << std::endl;
}
