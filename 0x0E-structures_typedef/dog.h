#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - create a dog info
 *
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description: first struct with alx
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

