/*
 * Task 5: Flipping
 * Author :linet gitonga
 */

#include "main.h"

/**
 * flip_bits -return number of bits you would need to flip
 * to get from one number to another
 * @n: decimaal number par
 * @m: destiny
 * Return: myf
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int p,myf = 0;
	unsigned long int d = sizeof(unsigned long int) * 8;

	for (p = 0; p < d; p++)
	{
		if ((m & 1) != (n & 1))
		myf += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (myf);
}

