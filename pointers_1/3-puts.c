#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: NULL
 */
void _puts(char *str)
{
	int i;

	for(i=0; ; i++)
	{
		if (*(str + i) != 0)
		{
			_putchar (*(str + i));
		}
		else if (*(str + i) == '\0')
			break;
	}
	_putchar('\n');
}
