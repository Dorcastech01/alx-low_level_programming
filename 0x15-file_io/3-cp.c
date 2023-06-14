#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void io_checker(int updt, int eri, char *filename, char mode);
/**
 * main - this is the main function
 * Description: a function that copies the content
 * of one file to another
 * @cnt_arg: this is the argument count
 * @psd_arg: this is the arguments passed
 * Return: this will return 1 on success and exit otherwise
 */
int main(int cnt_arg, char *psd_arg[])
{
	int a, b, rd = 1024, ar_wrt, endd, end_dst;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char d_buff[1024];

	if (cnt_arg != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	a = open(psd_arg[1], O_RDONLY);
	io_checker(a, -1, psd_arg[1], 'O');
	b = open(psd_arg[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	io_checker(b, -1, psd_arg[2], 'W');
	while (rd == 1024)
	{
		rd = read(a, d_buff, sizeof(d_buff));
		if (rd == -1)
			io_checker(-1, -1, psd_arg[1], 'O');
		ar_wrt = write(b, d_buff, rd);
		if (ar_wrt == -1)
			io_checker(-1, -1, psd_arg[2], 'W');
	}
	endd = close(a);
	io_checker(endd, a, NULL, 'C');
	end_dst = close(b);
	io_checker(end_dst, b, NULL, 'C');
	return (0);
}

/**
 * io_checker - this is a function
 * Description: this is used to check if a file can be opened or closed
 * @updt: this is the file descriptor of the file to be opened
 * @filename: this is name of the file
 * @mode: closing or opening
 * @eri: this is the file descriptor
 * Return: it returns void
 */
void io_checker(int updt, int eri, char *filename, char mode)
{
	if (mode == 'C' && updt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", eri);
		exit(100);
	}
	else if (mode == 'O' && updt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && updt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
