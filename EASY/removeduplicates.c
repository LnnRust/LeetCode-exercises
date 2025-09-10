#include <stdio.h>

int removeDuplicates(int* nums, int numsSize)
{
    int k = 1;
	if(numsSize == 0)
		return 0;
	for(int i = 1; i < numsSize; i++)
	{
		if(nums[i] != nums[k - 1])
		{
			nums[k] = nums[i];
			k++;
		}
	}
	return k;
}
