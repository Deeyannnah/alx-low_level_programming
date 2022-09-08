#include <unistd.h>

/**
 * main - main function in the task
 *
 * Description: print a quote using write function
 *
 * return: return 1 (Success)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);`
	return (1);

}

