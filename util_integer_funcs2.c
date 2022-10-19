#include "main.h"
#include <stdlib.h>

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

void print_hex_char(void *);
/**
 * handle_address - converts unsigned int to hex and print
 * @num: the integer to be converted to hex
 * @num2: variable to knw when to print initianls
 * Return: number of character printed
 */
int handle_address(void *num, void *num2)
{
	unsigned long char_count = 0;
	void *rem;

	if (handle_null(num))
		return (5);
	if ((unsigned long)num == (unsigned long)num2)
	{
		_putchar('0');
		_putchar('x');
		char_count += 2;
	}
	if (num > (void *)15)
		char_count += handle_address((void *)((unsigned long)num / 16), num2);
	rem = (void *)((unsigned long)num % 16);
	print_hex_char(rem);
	char_count++;
	return (char_count);
}

/**
 * handle_null - handle null arguments
 * (prints (nil) and return 5 if null else return 0)
 * @ptr: pointer to check
 * Return: number of character printed
 */
int handle_null(void *ptr)
{
	if (ptr == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}
	return (0);
}


/**
 * print_hex_char - prints a char of hex value
 * @rem: pointer to check
 * Return: number of character printed
 */
void print_hex_char(void *rem)
{
	switch ((unsigned long)rem)
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
			_putchar((unsigned long)rem + '0');
	}
}
