#include "main.h"

/**
 * rot13 - function
 * Description: encoding a string using rot13
 * @o: string to be encoded
 * Return: result
 */
char *rot13(char *o)
{
	int w, q;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; o[w] != '\0'; w++)
	{
		for (q = 0; a[q] != '\0'; q++)
		{
			if (o[w] == a[q])
			{
				o[w] = b[q];
				break;
			}
		}
	}

	return (o);
}

