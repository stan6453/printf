#include <unistd.h>
#include "main.h"
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

/**
 * handle_string - prints a string to the standard output
 * @ptr: the string to be printed.
 * Description: prints an array of characters to the standard output.
 * Return: integer number of char written
 */
int handle_string(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	return (i);
}
