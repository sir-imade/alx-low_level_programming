#include "main.h"
#include <unistd.>

/**
 * _putchar - writes the character c
 * @c: the character to print
 *
 * return: on success 1
 * on error , -1 is returned, and error is set correctly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
