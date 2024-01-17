#include <stdio.h>
/**
 * main - print the number of argument pass to it
 *
 * @argc: number of command line argument
 * @argv: array that contain the command line argument
 *
 * return: (0) when successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{	printf("%d\n", argc - 1);
	return (0);
}
