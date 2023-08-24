#include "lists.h"
void comefirstbyALH(void) __attribute__ ((constructor));

/**
 * comefirstbyALH - function that run before main function
 */
void comefirstbyALH(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
