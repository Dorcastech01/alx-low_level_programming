#include "main.h"

/**
 * leet - function
 * Description: encoding a string into 1337
 * @eri: char array string type
 * Return: s transformed
 */

char *leet(char *eri)
{
	int a, b;
	char eri1[] = "aeotl";
	char ERI1[] = "AEOTL";
	char eri2[] = "43071";

	for (a = 0; eri[a] != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (eri[a] == eri1[b] || eri[a] == ERI1[b])
			{
				eri[a] = eri2[b];
				break;
			}
		}
	}
	return (eri);
}
