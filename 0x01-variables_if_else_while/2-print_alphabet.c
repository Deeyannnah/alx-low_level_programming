#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all letters of he alphabet
 *
 * Return: 0
 */

int mai(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);

}
