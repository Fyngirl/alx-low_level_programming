#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int d1, d2, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(izeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (d1 = 0; name[d1]; d1++)
		;
	d1++;
	dog->name = malloc(d1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < d1; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (d2 = 0; owner[d2]; d2++)
		;
	d2++;
	dog->owner = malloc(d2 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < d2; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
