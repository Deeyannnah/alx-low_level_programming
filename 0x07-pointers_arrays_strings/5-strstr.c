#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: the string to search
  * @needle: the substring to be located
  *
  * Return: If the substring is located - a pointer to the beginning
  *                                      of the located substring.
  * If the substring is not located - NULL.
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
