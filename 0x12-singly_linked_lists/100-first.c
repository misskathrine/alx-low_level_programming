#include <stdio.h>

/**
 * first - func executed before main
 * Return: no return value.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
