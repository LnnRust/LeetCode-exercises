#include <stdio.h>

int reverse(int x)
{
	int revx = 0;
	if(x < 0)
	{
		printf("-");
		x = -x;
	}
	while(x > 0)
	{
		revx = revx * 10 + x % 10;
		x /= 10;
	}
    return revx;
}

int main()
{
    int x = -123;
    printf("%d", reverse(x));
	return 0;
}