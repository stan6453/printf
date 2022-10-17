
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

/**
 * handle_integer - prints a string to the standard output
 * @num: the integer to print to std out
 * Description: prints an integer to the standard output.
 * Return: number of character printed
 */
int handle_integer(int num)
{
	int char_count = 0;

	if (num < 0)
	{
		_putchar('-');
		char_count++;
		num = -(num);

	}

	if (num > 9)
		char_count += handle_integer(num / 10);
	_putchar(num % 10 + '0');
	char_count++;
	return (char_count);
}
