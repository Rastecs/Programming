#include "main.h"
/**
 * write a function that prints a string, followed by a new line to stdout
 * prototype: void _puts(char *str);
 */
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}
