#include <stdio.h>
/**
 * main - print argument passed to it.
 * @argc: displays number of commands typed
 * @argv: contain program command line arguments
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
