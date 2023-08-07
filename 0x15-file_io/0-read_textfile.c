/*
 * Taskk: 0x15 i/o
 * Author :Linet Gitonga
 */

#include "main.h"
/**
 * @filename:the name of the file to be read
 * read_textfile - reads a text file and prints it to the standard output
 * @letters: no of letters to read and print
 *
 * Return: should the number of letters printed
 * or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdi;
	int a, j;
	char *bufr;
	if (!filename)
		return (0);
	fdi = open(filename, O_RDONLY);
	if (fdi < 0)
		return (0);
	bufr = malloc(sizeof(char) * letters);
	if (!bufr)
		return (0);
	a = read(fdi, bufr, letters);
	if (a < 0)
	{
		free(bufr);
		return (0);
	}
	bufr[a] = '\0';
	close(fdi);
	j = write(STDOUT_FILENO, bufr, a);
	if (j < 0)
	{
		free(bufr);
		return (0);
	}
	free(bufr);
	return (j);
}
