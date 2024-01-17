#include <stdio.h>
/*
 * main - print the name of the program
 * @argv - is a pointer to an array
 * @argc - count number of argument
 * return: always 0
 */
int main(int argc_attribute_((unused)), char *argv[])
{	printf("%s\n", *argv);
	return (0);
}
