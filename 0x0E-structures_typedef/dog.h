#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - struct for dogs.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
