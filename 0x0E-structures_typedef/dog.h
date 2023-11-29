<<<<<<< HEAD
#ifndef DOG_HEADER_FILE
#define DOG_HEADER_FILE
/*
* struct dog - contains elements of dog.
*/

struct dog
{
char * name;
double age;
char * owner;
};

typedef struct dog dog_t;

=======
#ifndef DOG_H
#define DOG_H
/**
* struct dog - a dog's basic info
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
>>>>>>> e90462539fd922cab93e6d28b86832db44ca397c
#endif
