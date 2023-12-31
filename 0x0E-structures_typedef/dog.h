#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: a struct for a dog taking info
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
