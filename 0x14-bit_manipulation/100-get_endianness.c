/*
 * Task 6: Check endianess
 * Author: Linet Gitonga
 */

#include "main.h"

/**
 * get_endianness - function checks the endiannes
 * Return: 
 */
int get_endianness(void)
{
	unsigned int f = 1;
	char *a = (char *) &f;

	return (*a);
}
