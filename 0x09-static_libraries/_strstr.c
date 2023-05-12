#include "main.h"
/**
 * *_strstr - main function
 * @haystack: first arg
 * @needle: second arg
 * Description: function that locates
 * a substring
 * Return: result
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *b = haystack;
		char *t = needle;

		while (*t != '\0' && *b == *t)
		{
			b++;
			t++;
		}
		if (*t == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
