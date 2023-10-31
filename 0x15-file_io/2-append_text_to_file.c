/*
 * Task 2: Append text to end of file
 * Author: Linet Gitonga
 */

#include "main.h"

/**
 * append_text_to_file -F appends text at the end of a file.
 * @filename: The name of a file
 * @text_content: Content of text
 *
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdi, stat = -1;
	int leng, a;

	if (filename == NULL)
		return (stat);

	fdi = open(filename, O_WRONLY | O_APPEND);
	if (fdi == -1)
		return (stat);
	stat = 1;

	if (text_content != NULL)
	{
		for (a = 0, leng = 0; text_content[a] != '\0'; a++)
			leng++;
		stat = write(fdi, text_content, leng);
		if (stat != -1)
			stat = 1;
	}
	close(fdi);
	return (stat);
}

