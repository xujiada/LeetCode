#include <iostream>
bool isPalindrome(int x) {
	int  i, k;
	int resver = 0;
	if (x < 0)
		return false;
	k = x;
	while (k != 0)
	{
		i = k % 10;
		resver = 10 * resver + i;  //�����resver����k����ᵼ������1ʱ��������
		k = k / 10;

	}
	return resver == x;
	//   return true;
	//  return false;
}
int main()
{
	int x = 123456;
	isPalindrome(x);
	getchar();
	return 0;
}