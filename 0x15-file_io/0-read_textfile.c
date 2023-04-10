#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: filename.
 *
 * @letters: num of letters printed.
 *
 * Return: numb of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int csp;
	ssize_t nrd, nwr;
	char *car;

	if (!filename)
		return (0);

	csp = open(filename, O_RDONLY);

	if (csp == -1)
		return (0);

	car = malloc(sizeof(char) * (letters));
	if (!car)
		return (0);

	nrd = read(csp, car, letters);
	nwr = write(STDOUT_FILENO, car, nrd);

	close(csp);

	free(car);

	return (nwr);
}
