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

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}

