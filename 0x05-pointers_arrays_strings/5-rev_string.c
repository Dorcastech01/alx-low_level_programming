#include "main.h"
/**
 * rev_string - main block
 * @s: user input
 * Description: script to reverse string
 * Return: 0
 */
void rev_string(char *s)
{
	int j, a, c;
	char e;

	j = 0;
	a = 0;
	while (s[a])
	{
		a++;
	}

	c = a - 1;
	for (j = 0; j < a / 2; j++)
	{
		e = s[j];
		s[j] = s[c];
		s[c--] = e;
	}
}
