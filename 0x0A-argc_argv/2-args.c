#include <stdio.h>
/**
 * main - prints all received arguments.
 * @argc: displays number of commands entered on command line.
 * @argv: displays commands entered.
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
