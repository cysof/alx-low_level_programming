#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the details of a struct dog,
 *              including its name, age, and owner. If any element
 *              of the struct is NULL, it prints "(nil)" instead.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %s\n", "(nil");
		}
		else
		{
			printf("Name : %s\n", d->name);
		}
		if (d == NULL)
		{
			printf("Age: %s\n", "(nil)");
		}
		else
		{
			printf("Age : %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner : %s\n", "(nil)");
		}
		else
		{
			printf("Owner : %s\n", d->owner);
		}
	}
}
