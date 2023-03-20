#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef forr truct dog
 */
typedef struct dog dogg_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *owner);
int _strlen(char *s);

#endif
