#include "main.h"
#include <stdio.h>

/**
 * write a function that swaps the values of two integers.
 * prototype: void swap_int(int *a, int *b);
 */
/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
