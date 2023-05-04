#include "main.h"

/**
 * cap_string - function
 * Description: capitalizing all words of a string
 * @m: arg
 * Return: result
 */
char *cap_string(char *m)
{
	int n = 0;

	while (m[n])
	{
		while (!(m[n] >= 'a' && m[n] <= 'z'))
		{
			n++;
		}

		if (m[n - 1] == ' ' ||
			m[n - 1] == '\t' ||
			m[n - 1] == '\n' ||
			m[n - 1] == ',' ||
			m[n - 1] == ';' ||
			m[n - 1] == '.' ||
			m[n - 1] == '!' ||
			m[n - 1] == '?' ||
			m[n - 1] == '"' ||
			m[n - 1] == '(' ||
			m[n - 1] == ')' ||
			m[n - 1] == '{' ||
			m[n - 1] == '}' ||
			n == 0)
		{
			m[n] = m[n] - 32;
		}
		n++;
	}
	return (m);
}
