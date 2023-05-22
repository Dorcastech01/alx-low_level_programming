#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - main function
 * @name: user input
 * @age: user input
 * @owner: user input
 * Return: result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *clinton;
	int e, r, b;

	e = 0;
	r = 0;

	while (name[e] != '\0')
		e++;
	while (owner[r] != '\0')
		r++;
	clinton = malloc(sizeof(dog_t));
	if (clinton == NULL)
	{
		free(clinton);
		return (NULL);
	}
	clinton->name = malloc(e * sizeof(clinton->name));
	if (clinton->name == NULL)
	{
		free(clinton->name);
		free(clinton);
		return (NULL);
	}
	for (b = 0; b <= e; b++)
		clinton->name[b] = name[b];
	clinton->age = age;
	clinton->owner = malloc(r * sizeof(clinton->owner));
	if (clinton->owner == NULL)
	{
		free(clinton->owner);
		free(clinton->name);
		free(clinton);
		return (NULL);
	}
	for (b = 0; b <= r; b++)
		clinton->owner[b] = owner[b];
	return (clinton);
}
