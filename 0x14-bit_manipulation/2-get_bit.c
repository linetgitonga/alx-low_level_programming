#include "main.h"

/**
 * get_bit -displays value of a bit at a given index
 * @n:shows decimal parameter
 * @index:displays the index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mybit;

	mybit = (n >> index);
	if (index > 32)
	return (-1);
	return (mybit & 1);
}
