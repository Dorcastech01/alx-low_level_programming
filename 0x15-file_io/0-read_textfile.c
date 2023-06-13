#include "main.h"

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
	FILE *dir;
	char *loc;
	ssize_t counter, eri, r;

	if (filename == NULL)
		return (0);

	dir = fopen(filename, "r");

	if (dir == NULL)
		return (0);

	loc = (char *)malloc(sizeof(char) * (letters + 1));

	if (loc == NULL)
	{
		fclose(dir);
		return (0);
	}
	counter = fread(loc, sizeof(char), letters, dir);

	if (ferror(dir))
	{
		free(loc);
		fclose(dir);
		return (0);
	}
	loc[counter] = '\0';
	eri = 0;
	r = loc[eri];

	for (eri = 0; eri < counter; eri++)
		_putchar(r);
	free(loc);
	fclose(dir);
	return (counter);

}
