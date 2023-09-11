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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
