#include "main.h"
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
	unsigned int char_count;

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

	switch (*(++*format))
	{
		case 'c':
			char_count += _putchar(va_arg(ap, int));
			break;
		case 's':
			char_count += handle_string(va_arg(ap, char *));
			break;
		case '%':
			char_count += _putchar('%');
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
		case 'p':
			/*
			 * char_count += handle_address(va_arg(ap, void *));
			*/
			break;
		default:
			char_count += _putchar(*(--*format));
			char_count += _putchar(*(++*format));
	}
	return (char_count);
}
