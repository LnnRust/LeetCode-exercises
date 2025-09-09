#include <stdio.h>

int value(char c)
{
	if(c == 'I')
		return 1;
	if(c == 'V')
		return 5;
	if(c == 'X')
		return 10;
	if(c == 'L')
		return 50;
	if(c == 'C')
		return 100;
	if(c == 'D')
		return 500;
	if(c == 'M')
		return 1000;
}

int romanToInt(char* s) 
{
	int i = 0;
	int temp = 0;
	while(s[i] != 0)
	{
		int currentvalue = value(s[i]);
		int nextvalue = value(s[i + 1]);
		if(currentvalue < nextvalue)
			temp -= currentvalue;
		else 
			temp += currentvalue;
		i++;
	}
	return temp;
}

int main(void)
{
	char s[] = "MCMXCIV";
	printf("%d", romanToInt(s));
}