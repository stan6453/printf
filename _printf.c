#include "main.h"
#include <stdarg.h>

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
		{
			char_count += _putchar(*format);
		}
		else
		{
			switch (*(++format))
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
				default:
					char_count += _putchar(*(--format));
					char_count += _putchar(*(++format));
			}
		}
	}



	va_end(ap);
	return (char_count);
}
