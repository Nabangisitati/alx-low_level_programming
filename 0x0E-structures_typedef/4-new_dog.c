#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog of tpye dog_t
 * @name: dog name
 * @age:age
 * @ owner:dog's owner
 *
 * Return: pointer to a new dog;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;

	/*find length for name and owner*/
	while (name(len1))
		len1++;
	while (name(len2))
		len2++;
	/*allocation for a new dog*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	/*allocation for name and owner copy*/
	newdog->name = malloc(sizeof(newdog->name) * len1);
	if (newdog == NULL)
		return (NULL);
	while (name[i])
	{
		newdog->name[i] = name[i];
		i++;
	}
	newdog->owner = malloc(sizeof(newdog->owner) * len2);
	if (newdog == NULL)
		return (NULL);
	while (owner[j])
	{
		newdog->owner[j] = owner[j];
		j++;
	}
	newdog->owner = age;
	return (newdog);
}
