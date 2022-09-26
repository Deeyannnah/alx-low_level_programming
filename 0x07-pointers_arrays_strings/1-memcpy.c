#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: dest memory area
  * @src: source of memory area
  * @n: bytes to copy
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
