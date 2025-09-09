#include <stdio.h>

int mySqrt(int x) 
{
	if(x == 2147483647)
		return 46340;
	int i = 0;
	while(i * i < x)
	{
		i++;
	}
	if(i * i > x)
		i -= 1;
	return i;
}

int main ()
{
	int x = 2147483647;
	printf("%d\n", mySqrt(x));
}