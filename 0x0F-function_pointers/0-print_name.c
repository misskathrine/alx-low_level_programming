#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - program to print a name
 * @name: name to print
 * @f: pointer to printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
