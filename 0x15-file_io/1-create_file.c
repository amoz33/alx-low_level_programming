#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: filename is the name of the file created.
 * @text_content: content written in the file.
 *
 * Return: 1 on success. -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int csp;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	csp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (csp == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(csp, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(csp);

	return (1);
}
