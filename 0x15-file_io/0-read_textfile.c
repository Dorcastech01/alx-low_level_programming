#include "main.h"
#include <stddef.h>

/**
 * read_textfile - this is the main function
 * @filename: this is the name of the file to be processed
 * @letters: the number of letters it should read and print
 * Description: a function that reads a text file and prints it to
 * the POSIX standard output
 * Return: this function returns the actual number of letters it
 * could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *loc;
	int dir;
	int counter;
	int answer;

	loc = malloc(sizeof(*loc) * (letters + 1));

	if (filename == NULL || loc == NULL)
	{
		free(loc);
		return (0);
	}

	dir = open(filename, O_RDONLY);

	if (dir == -1)
		return (0);

	counter = read(dir, loc, letters);

	if (counter == -1)
		return (0);

	loc[counter] = '\0';

	answer = write(STDOUT_FILENO, loc, counter);

	if (answer != counter)
		return (0);

	free(loc);
	close(dir);
	return (counter);
}
