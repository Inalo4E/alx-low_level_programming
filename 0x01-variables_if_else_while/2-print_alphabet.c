#include <stdio.h>
/**
 * main - Prints the alphabet.
 * @putchar - program to print alphabets in lowercase
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int putchar(int ch);
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
