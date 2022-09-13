#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3
 * Return: 0
 */
int main(void)
{
	int ch = 0;
	int sum = 0;

	while (ch < 1024)
	{
		if (ch % 3 == 0 || ch % 5 == 0)
		{
			sum += ch;
		}

		ch++;
	}
	printf("%i\n", sum);
	return (0);
}
