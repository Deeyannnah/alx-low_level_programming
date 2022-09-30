#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: The source string
  * @accept: accepted characters
  *
  * Return: If a set is matched - a pointer to the matched byte.
  * If no set is matched - NULL.
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
