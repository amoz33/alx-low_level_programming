#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - fuction that appends text at the end of a file
 *
 * @filename: filename.
 *
 * @text_content: content added to file.
 *
 * Return: 1 if the file exists. -1 if the file doesn't exist or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int csp;
	int nletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	csp = open(filename, O_WRONLY | O_APPEND);

	if (csp == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(csp, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(csp);

	return (1);
}
