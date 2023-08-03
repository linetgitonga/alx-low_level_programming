/*
 * Task 1: function to print binary rep of num
 * Author: Linet Gitonga
 */

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 * return : binary rep of number
 */
void print_binary(unsigned long int n)
{
	int p, numcount = 0;
	unsigned long int nocurrent;

	for (p = 63; p >= 0; p--)
	{
		nocurrent = n >> p;

		if (nocurrent & 1)
		{
			_putchar('1');
			numcount++;
		}
		else if (numcount)
			_putchar('0');
	}
	if (!numcount)
		_putchar('0');
}
