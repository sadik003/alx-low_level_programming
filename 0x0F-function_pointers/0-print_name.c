#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - a function that prints name
 * @name: name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
