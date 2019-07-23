#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Function to determine the lenght of a string.
 * @s: pointer to a char
 * Return: lenght of a string.
 */
int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; s++)
{
i++;
}
return (i);
}

/**
 * _strncpy - Copies a string into a new one. *
 * @dest: New string to be pasted
 * @src: String to be copied. *
 * Return: pointer to the string copied.
 */
char *_strncpy(char *dest, char *src)
{
int j;

for (j = 0; src[j] != '\0'; j++)
{
dest[j] = src[j];
}

dest[j] = '\0';
return (dest);
}

/**
 * new_dog - function that creates a new dog and store
 * owner and dog's name.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 * Return: Dog's inbfromation
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
char *new_name;
char *new_owner;
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
{
return (NULL);
}

new_name = malloc((_strlen(name) + 1));
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}

new_owner = malloc((_strlen(owner) + 1));
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}

new_name = _strncpy(new_name, name);
new_owner = _strncpy(new_owner, owner);

new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

return (new_dog);
}
