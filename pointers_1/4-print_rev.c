#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: pointer to the string
 * Retrun:NULL
 */
void print_rev(char *s)
{
	int i, rev, norm;

	norm = 0;
	for (i = 0; s[i] != '\0'; i++)
		norm++;
	for (rev = (norm - 1); rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
