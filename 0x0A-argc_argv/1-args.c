#include <stdio.h>
#include "main.h"

/**
 * main - func that print number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);

		return (0);
}
