#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Description: script for upper and lowercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(toupper(ch));
	putchar('\n');
	return (0);
}
