#include "main.h"

/**
  * _strchr - locates a character in string
  * @s: source string
  * @c: character to be located
  *
  * Return: If c is found - a pointer to the first occurence.
  * If c is not found - NULL.
  */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
