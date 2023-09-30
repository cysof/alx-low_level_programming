#include "main.h"
/**
 * get_endianness - function that check the endianness
 * Return: 0 if big endian, 1 if litte endian
 */
int get_endianness(void)
{
	unsigned int test = 1;
	unsigned char *byte_ptr = (unsigned char *)&test;

	return (*byte_ptr == 1);
}
