#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a type that represents a dog
 * @name: first element
 * @ge: 2nd element
 * @owner: Dog's owner
 *
 * Description: Talks about ements that describe a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - Declares a new dog name for the type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
