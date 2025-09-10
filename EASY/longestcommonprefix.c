#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
	int i = 0;
	if(strsSize == 0)
	return "";
	char *firststring = strs[0];
	int prefix = 0;
	int end = 0;
	while(end == 0)
	{
		char a = firststring[prefix];
		if (a == '\0')
			end = 1;
		else
		{
			for(int i = 0; i < strsSize; i++)
			{
				if(strs[i][prefix] != a)
					end = 1;
			}
		}
		if(end == 0)
			prefix++;
	}
	char *prefixstrs = malloc(prefix + 1);
	int j = 0;
	while(j < prefix)
	{
		prefixstrs[j] = firststring[j]; 
		j++;
	}
	prefixstrs[prefix] = '\0';

	return prefixstrs;
}