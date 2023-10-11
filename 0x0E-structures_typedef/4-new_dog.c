#include "dog.h"
#include <stdlib.h>


/**
 * str_len: string length
 * @s: input string
 *
 * Return: string length
 */

int str_len(const char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
	}
	return (i);
}

/**
 * str_cp - copy string
 * @s: string input
 * @dest: string copy
 *
 * Return: dest
 */

char *str_cp(char *dest, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		dest[i] = s[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog -  function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct point dog and Null otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (str_len(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = str_cp(dog->name, name);
	dog->age = age;
	dog->owner = str_cp(dog->owner, owner);

	return (dog);
}
