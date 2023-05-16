#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main function
 * @ac: first arg
 * @av: second arg
 * Description: a function that concatenates
 * all the arguments of your program
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	int total_len, i, index;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_len = 0;

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

	str = (char *) malloc(total_len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(&str[index], av[i]);
		index += strlen(av[i]);
		str[index] = '\n';
		index++;
	}
	str[index] = '\n';
	return (str);
}
