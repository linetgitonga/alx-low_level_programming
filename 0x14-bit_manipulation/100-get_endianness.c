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
	int l = 1;
	int a = 1;
	char *b = (char *)&a;

	flag = *b + 48;
	return (l);
}
