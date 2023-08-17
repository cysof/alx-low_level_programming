#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: Name to be printed
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * printname - Print the name
 * @name: name to be printed at pointer location
 */

void printname(char *name)
{
	printf("Name : %s\n", name);
}
