#include <stdio.h>

/**
 * main - main point
 * Description: prints the numbers from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
