#include <stdio.h> 
int *twoSum(int numbers[], int n, int target) {
	int index1, index2;
	for (index1 = 0; index1 < n - 1; index1++)
		for (index2 = index1 + 1; index2 < n; index2++)
			if (numbers[index1] + numbers[index2] == target){
				printf("index1=%d, index2=%d", index1 + 1, index2 + 1);
			}
	return 0;
}