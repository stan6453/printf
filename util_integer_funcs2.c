#include "main.h"
/**
 * handle_hexlower - converts unsigned int to hex and print
 * @num: the integer to be converted to hex
 * Return: number of character printed
 */
int handle_hexlower(unsigned int num)
{
	unsigned int char_count = 0;
	unsigned int rem;

	if (num > 15)
		char_count += handle_hexlower(num / 16);

	rem = num % 16;

	switch (rem)
	{
		case 10:
			_putchar('a');
			break;
		case 11:
			_putchar('b');
			break;
		case 12:
			_putchar('c');
			break;
		case 13:
			_putchar('d');
			break;
		case 14:
			_putchar('e');
			break;
		case 15:
			_putchar('f');
			break;
		default:
			_putchar(rem + '0');
	}
	char_count++;

	return (char_count);

}


/**
 * handle_hexupper - converts unsigned int to hex and print
 * @num: the integer to be converted to hex
 * Return: number of character printed
 */
int handle_hexupper(unsigned int num)
{
	unsigned int char_count = 0;
	unsigned int rem;

	if (num > 15)
		char_count += handle_hexupper(num / 16);

	rem = num % 16;

	switch (rem)
	{
		case 10:
			_putchar('A');
			break;
		case 11:
			_putchar('B');
			break;
		case 12:
			_putchar('C');
			break;
		case 13:
			_putchar('D');
			break;
		case 14:
			_putchar('E');
			break;
		case 15:
			_putchar('F');
			break;
		default:
			_putchar(rem + '0');
	}
	char_count++;

	return (char_count);

}


/**
 * handle_hexlower - converts unsigned int to hex and print
 * @num: the integer to be converted to hex
 * Return: number of character printed
 */
int handle_address(unsigned int num)
{
	int i;
	unsigned int char_count = 0;

	int char_size = gethexsize(num);

	for (i = 0; i < 16 - char_size; i++)
	{
		_putchar('0');
		char_count++;
	}
	char_count += handle_hexupper(num);

	return (char_count);
}




int gethexsize(unsigned int num)
{
	unsigned int char_count = 0;
	unsigned int rem;

	if (num > 15)
		char_count += gethexsize(num / 16);

	rem = num % 16;

	switch (rem)
	{
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
	}
	char_count++;

	return (char_count);

}