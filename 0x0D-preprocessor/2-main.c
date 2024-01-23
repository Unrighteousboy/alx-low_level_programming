#include <stdio.h>
int _putchar(char c);
/**
 * main - print file name
 * @c: parameter
 * Return: 0 always
 */
int main(void)
{
	_putchar(_FILE_);
	_putchar('\n');
	return (0);
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
