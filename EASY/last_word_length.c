#include <stdio.h>

int lengthOfLastWord(char* s)
{
	int length = 0;
	int i = 0;
	while(s[i] != '\0')
		i++;
	i--;
	while(i >= 0 && s[i] == ' ')
		i--;
	while(i >= 0 && s[i] != ' ')
	{
		i--;
		length++;
	}
    return length;
}

int main(void)
{
	char s[] = "a    ";
	printf("%d\n", lengthOfLastWord(s));
}