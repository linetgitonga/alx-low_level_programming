/*
 * Task4: set val of abit to 0
 * Author :linet gitonga
 */

#include "main.h"

/**
 * clear_bit -value of a bit is set to 0 at a given index.
 * @n: The decimal number
 * @index: The index 
 *
 * Return: (integer)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) <= index)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}

