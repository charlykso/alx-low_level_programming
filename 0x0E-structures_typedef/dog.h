#ifndef DOG_H
#define DOG_H

/**
* struct dog - new type defined
* @name: dog's name as a pointer
* @age: dog's age as a float
* @owner: pointer to the owner's of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
