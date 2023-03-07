#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: pointer to each char
 * Return: string length
 */
int _strlen(char *s)
{
	int i, sum;

	for (i = 0; ; i++)
	{
		if (*(s + i) != 0)
		{
			sum += 1;
		}
		else if (*(s + i) == '\0')
		{
			break;
		}
	}
	return (sum);
}
