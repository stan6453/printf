#include <unistd.h>
#include "main.h"

int get_strlen(char *str);
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
 * handle_npch -(handles non-printable character)
 * @ptr: the string to be printed.
 * Description: prints an array of characters to std out,
 * for non-printable characters, omly the hexadecimal reprisentation
 * is printed in its palce
 * Return: integer number of char written
 */
int handle_npch(char *ptr)
{
	int i;
	int char_count = 0;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] < 32 || ptr[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			char_count += 2;
			if (ptr[i] < 16)
			{
				_putchar('0');
				char_count++;
			}
			char_count += handle_hexupper(ptr[i]);
		}
		else
		{
		_putchar(ptr[i]);
		char_count++;
		}
	}
	return (char_count);
}


int handle_rstring(char *ptr)
{
	int strlen = get_strlen(ptr);
	int char_count = strlen;

	for (strlen--; strlen >= 0; strlen--)
		_putchar(ptr[strlen]);
	return char_count;
}


/**
 * get_strlen - finds length of a string
 * @str: string to find its length
 * Description: finds length of a string (not including null character)
 * Return: length of string
 */
int get_strlen(char *str)
{
	int i;

	if(str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
