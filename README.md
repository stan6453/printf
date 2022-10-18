THE PRINTF PROJECT
Introduction:
The printf function sends formatted output to stdout. This project was curated for learning purposes by Stanley Ezechukwu and Sandra Nwogbo in the Holberton & Alx scholarship program Cohort 9.

The _printf() function returns the total number of characters printed to the stdout(excluding the null byte at the end of strings) after a successful execution.

If an output error is encountered, a negative value of -1 is returned.

The prototype of this function is: int _printf(const char format, ...);

This means that it has one mandatory format argument, and an extra number of arguments that can be none, or many.

Format of the format string

The format string is a character string starting and ending with double quotes. The format string is composed of zero or more directives; ordinary characters (not %), and conversion specifications, each of which results in fetching zero or more subsequent arguments.

Each conversion specification is introduced by the character % and ends with a conversion specifier. In between there may be (in this order):

Zero or more flags

An optional field width

An optional precision modifier

An optional length modifier

The flag characters

Flag Description

Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Compilation
The code must be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic .c

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h): #include main.h

Use & Example
Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);

Examples:

Basic String: _printf("%s Hello, World!");`

Output: Hello, World!
Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`

Output: This is an array element arr[32]:A
Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.

Specifiers
Specifier	Output	Examples
c	Character	y
d or i	Signed integer	1024, -1024
s	String of characters	Hello, world!
b	Binary Representation of unsigned integer.	01010110
u	Unsigned integer	1024
o	Unsigned octal	432
x	Unsigned hexadecimal integer	3ca
x	Unsigned hexadecimal integer (uppercase)	3CA
s	String with hex-ascii value replacing special chars	\x0A\x0A
p	Pointer address	0x403212
r	Reversed string of characters	dlroW olleH
R	ROT13 Translation of string	Uryyb
Flags
flags	Description
-	Left-justify the output within the field width that was given; Right justification is the default (see width sub-specifier)
+	Preceeds the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign.
(space)	If no sign is going to be written, a blank space is inserted before the value.
#	Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero.
0	Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).
