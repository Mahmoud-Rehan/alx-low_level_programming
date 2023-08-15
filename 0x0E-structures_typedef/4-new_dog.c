#include <stdlib.h>
#include "dog.h"

/**
 * _cpy - copy two string.
 * @dest: The copied string.
 * @src: The string.
 * @length: The length.
 * Return: The copied string.
 */

char *_cpy(char *dest, char *src, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The dog name.
 * @age: The dog age.
 * @owner: The owner.
 * Return: The new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0;

	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (i + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (j + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}

	_cpy(dog->name, name, i);
	_cpy(dog->owner, owner, j);
	dog->age = age;
	return (dog);
}
