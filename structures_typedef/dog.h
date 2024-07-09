#ifndef DOG_H
#define DOG_H (dog)
/**
 * struct dog - Stores the data of dogs
 * @name: The name of the dog as a string
 * @age: The age of the dog as a float
 * @owner: The owner of the dog in a string
 *
 * Description: in this structure you can store the data of your actual dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
