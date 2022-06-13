#include "main.h"

/**
 * _strlen - this function returns the length of string.
 * @s: input string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
