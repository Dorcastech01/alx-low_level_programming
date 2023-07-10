#include "main.h"

/**
 * create_file - this is the main function given
 * @filename: this is the name of the file to create
 * @text_content: this is a NULL terminated string to
 * write to the file
 * Description: a function that creates a file
 * Return: it returns 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int eri;
	int light;
	int total;

	total = 0;
	light = 0;
	eri = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (total = 0; text_content[total];)
			total++;
	}

	eri = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	light = write(eri, text_content, total);

	if (eri == -1 || light == -1)
		return (-1);

	close(eri);

	return (1);
}

