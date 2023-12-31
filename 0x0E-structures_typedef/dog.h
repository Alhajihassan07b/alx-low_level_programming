#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - define new type
 * @name: first input
 * @age: second input
 * @owner: third input
 * Desc: struct dog
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
