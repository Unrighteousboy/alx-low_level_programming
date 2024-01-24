#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: name parameter
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
