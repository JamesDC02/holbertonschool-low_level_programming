#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - duplicates a string
* @str: string to duplicate
* Return: duplicated string
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	unsigned int length;

	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}

	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= length)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new dog or NULL on failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
