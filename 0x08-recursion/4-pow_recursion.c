#include "main.h"
/**
 * _pow_recursion - a function thst return the value of x raise to the power of y
 * @x: parameter
 * @y: parameter
 * Return: value of x raise to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
