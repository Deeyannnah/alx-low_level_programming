#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @c: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int c)
{
	int a;

	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < c; a++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
