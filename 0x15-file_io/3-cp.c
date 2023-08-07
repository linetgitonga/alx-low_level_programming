/*
 * Task 3: copy
 * Author: Linet Gitonga
 */

#include "main.h"

/**
 * main -Function Entry Point
 * @argc: It is argument count
 * @argv: It is an argument list
 *
 * Return: integer
 */

int main(int argc, char **argv)
{
	int fdiFrom, fdiTo, stat;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdiFrom = open(argv[1], O_RDONLY);
	fdiTo = open(argv[2], O_CREAT | O_WRONLY, 0664);

	if (fdiFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fdiTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copyTo(fdiFrom, fdiTo, argv[1], argv[2]);
	stat = close(fdiFrom);
	if (stat == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdiFrom);
	stat = close(fdiTo);
	if (stat == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdiTo);
	if (stat == -1)
		exit(100);
	return (0);
}

/**
 * copyTo - Func copies from file to another file
 * @from:It From file descriptor
 * @to: To file descriptor
 * @fromFilename: The from file name
 * @toFilename: The to file name
 *
 * Return: (void)
 */
void copyTo(int from, int to, char *fromFilename, char *toFilename)
{
	char bufr[1024];
	int stats,countr;

       countr= read(from, bufr, 1024);
	while (countr != 0)
	{
		if (countr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fromFilename);
			exit(98);
		}
		stats = write(to, bufr, countr);
		if (stats == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", toFilename);
			exit(99);
		}
		countr = read(from, bufr, 1024);
	}
}
