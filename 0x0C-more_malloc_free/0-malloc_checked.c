#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory.
 * @bytes: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, ensure status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
