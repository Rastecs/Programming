#include "main.h"
/**
 * function that prints a string in reverse followed by a new line
 * prototye: void print_rev(char *s)
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
	print_rev(str);
	return (0);
}
