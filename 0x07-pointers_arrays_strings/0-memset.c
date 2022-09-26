#include "main.h"

/**
  * _memset - Fill memory area with a constant byte
  * @s: memory area to fill
  * @b: the constant byte
  * @n: bytes of memory area
  *
  * Return: A pointer to the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
