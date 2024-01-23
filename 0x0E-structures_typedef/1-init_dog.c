#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - a new dog whose variable is to be initilized
 *
 * @d: pointer to the struct of the new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Description: this function intialize the members of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age; /* age of the dog */
	d->owner = owner;

}

