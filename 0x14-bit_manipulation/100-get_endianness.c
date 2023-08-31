#include "main.h"
/**
 * get_endianness - functio that check the endianness
 * @void: it take void paramiter
 * Return: always return 0
 */
int get_endianness(void)
{
	unsigned int test = 1;
	unsigned char *byte_ptr = (unsigned char *)&test;

	return (*byte_ptr == 1);
}
