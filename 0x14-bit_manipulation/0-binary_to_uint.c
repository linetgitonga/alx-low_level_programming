#include "main.h"

/**
 * binary_to_uint -func to converts a binary number to unsigned int
 * @b: string having the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int de_value = 0;
	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		de_value = 2 * de_value + (b[z] - '0');
	}
	return (de_value);
}

