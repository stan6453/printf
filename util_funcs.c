#include "main.h"
#include <math.h>
/**
 * handle_integer - prints an int to the standard output
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

/**
 * handle_binary - converts unsigned int to binary and print
 * @num: the integer to be converted to binary
 * Return: number of character printed
 */
int handle_binary(unsigned int num)
{
	unsigned int char_count = 0;

	if (num > 1)
		char_count += handle_binary(num / 2);
	_putchar(num % 2 + '0');
	char_count++;
	return (char_count);

}


/**
 * handle_uinteger - prints an integer to stdout
 * @num: the integer to print to std out
 * Description: prints an integer to the standard output.
 * Return: number of character printed
 */
int handle_uinteger(unsigned int num)
{
	num = pow(2,32) - (-num);
	return (handle_integer(num));
}



/**
 * handle_octal - converts unsigned int to octal and print
 * @num: the integer to be converted to octal
 * Return: number of character printed
 */
int handle_octal(unsigned int num)
{
	unsigned int char_count = 0;

	if (num > 7)
		char_count += handle_octal(num / 8);
	_putchar(num % 8 + '0');
	char_count++;
	return (char_count);

}
