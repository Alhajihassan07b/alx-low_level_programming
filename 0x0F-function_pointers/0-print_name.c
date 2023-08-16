#include "function_pointers.h"
/**
 * print_name - function that print name
 * @name: input
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
