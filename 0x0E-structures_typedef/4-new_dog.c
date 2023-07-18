#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: The string character
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - a function that copies the string pointed to
 *  by src, including the terminating null byte (\0), to
 *  the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog -  a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0 success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
