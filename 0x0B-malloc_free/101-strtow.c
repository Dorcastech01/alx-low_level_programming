#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORD_LENGTH 100
/**
 * strtow - main function
 * @str: arg
 * Description: a function that splits a string into words
 * Return: result
 */

char **strtow(char *str);

char **strtow(char *str)
{
	int i, j, k, m;
	int wordCount, strLength, wordLength;
	char **words;

	if (str == NULL || strcmp(str, " ") == 0)
	{
		return (NULL);
	}
	wordCount = 0;
	strLength = strlen(str);
	words = NULL;

	for (i = 0; i < strLength; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			wordCount++;
		}
	}
	words = (char **)malloc((wordCount + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	k = 0;

	while (i < strLength)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (j < strLength && str[j] != ' ')
			{
				j++;
			}
			wordLength = j - i;
			words[k] = (char *)malloc((wordLength + 1) * sizeof(char));

			if (words[k] == NULL)
			{
				for (m = 0; m < k; m++)
				{
					free(words[m]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[k], str + i, wordLength);
			words[k][wordLength] = '\0';
			k++;
			i = j;
		}
		else
		{
			i++;
		}
	}
	words[wordCount] = NULL;
	return (words);
}
