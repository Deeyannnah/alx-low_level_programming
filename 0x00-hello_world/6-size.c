#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of avrious types.
 *
 * Return: Always 0 (Succesful)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));

	return (0);


}
