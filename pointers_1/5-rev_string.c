#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: NULL
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; i < 10; i--)
	{
		_putchar(*(s - i));
	}
}
