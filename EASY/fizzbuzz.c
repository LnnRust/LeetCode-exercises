#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char** fizzBuzz(int n, int* returnSize)
{
	*returnSize = n;
	char **answer = malloc(n * sizeof(char*));

	int i = 0;
	while(i < n)
	{
		int number = i + 1;
		if (number % 3 == 0 && number % 5 == 0)
		{
			answer[i] = malloc(9);
			strcpy(answer[i], "FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			answer[i] = malloc(5);
			strcpy(answer[i], "Fizz");
		}
		else if (number % 5 == 0)
		{
			answer[i] = malloc(5);
			strcpy(answer[i], "Buzz");
		}
		else
		{
			answer[i] = malloc(12);
			sprintf(answer[i], "%d", number);
		}
		i++;
	}
	return answer;
}