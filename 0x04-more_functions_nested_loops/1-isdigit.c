#include "main.h"

/**
 * _isdigit - check if parameter is between 0 and 9.
 * @c: input number.
 *
 * Return: 1 for number (0-9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
