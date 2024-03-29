#include "main.h"

/**
 * append_text_to_file - this is the main function given
 * @filename: this is the file that would be processed
 * @text_content: this is the NULL terminated string
 * to add at the end of the file
 * Description: a function that appends text at the end of a file
 * Return: 1 if the file exists and -1 if the file does not exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int eri, light, total;

	eri = 0;
	light = 0;
	total = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (total = 0; text_content[total];)
			total++;
	}

	eri = open(filename, O_WRONLY | O_APPEND);
	light = write(eri, text_content, total);

	if (eri == -1 || light  == -1)
		return (-1);

	close(eri);

	return (1);
}
