#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: dog structure tagname
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0 success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	 if (d != NULL)
	 {
		 d->name = name;
		 d->age = age;
		 d->owner = owner;
	 }
}
