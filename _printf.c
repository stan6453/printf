#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
int handle_conversion(va_list ap, const char **format);
/**
 * _printf - prints a string to the standard output
 * @format: the string to be printed.
 * @...: list of arguments to replace conversion specifires with
 * Description: prints an array of characters to the standard output,
 * expanding conversion specifires as needed.
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int char_count = 0;

	if (format == NULL)
	{
		_putchar('\n');
		return (0);
	}

	va_start(ap, format);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
			char_count += _putchar(*format);
		else
		{
			char_count += handle_conversion(ap, &format);
		}
	}
	va_end(ap);
	return (char_count);
}




/**
 * handle_conversion - this fn hadles all the specific conversion modifiers
 * @ap: the variable arguments
 * @format: pointer to the format (type char *) argument from the printf fn
 * Return: number of character printed
 */
int handle_conversion(va_list ap, const char **format)
{
	int char_count = 0;
	void *for_address;

	for_address = (void *)0;
	switch (*(++*format))
	{
		case 'c':
			_putchar(va_arg(ap, int));
			char_count++;
			break;
		case 's':
			char_count += handle_string(va_arg(ap, char *));
			break;
		case '%':
			_putchar('%');
			char_count++;
			break;
		case 'i':
		case 'd':
			char_count += handle_integer(va_arg(ap, int));
			break;
		case 'b':
			char_count += handle_binary(va_arg(ap, unsigned int));
			break;
		case 'u':
			char_count += handle_uinteger(va_arg(ap, unsigned int));
			break;
		case 'o':
			char_count += handle_octal(va_arg(ap, unsigned int));
			break;
		case 'x':
			char_count += handle_hexlower(va_arg(ap, unsigned int));
			break;
		case 'X':
			char_count += handle_hexupper(va_arg(ap, unsigned int));
			break;
		case 'S':
			char_count += handle_npch(va_arg(ap, char *));
			break;
		case 'r':
			char_count += handle_rstring(va_arg(ap, char *));
			break;
		case 'R':
			char_count += handle_rot13string(va_arg(ap, char *));
			break;
		case 'p':
			for_address = va_arg(ap, void *);
			char_count += handle_address(for_address, for_address);
			break;
		case '\0':
			_putchar(*(--*format));
			char_count++;
			break;
		default:
			_putchar(*(--*format));
			_putchar(*(++*format));
			char_count += 2;
			break;
	}
	return (char_count);
}
