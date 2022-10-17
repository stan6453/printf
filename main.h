#ifndef _SANDS_PRINTF
#define _SANDS_PRINTF

int _printf(const char *, ...);
int _putchar(char c);
int handle_string(char *);
int handle_integer(int);
int handle_binary(unsigned int);
int handle_uinteger(unsigned int);
int handle_octal(unsigned int);
int handle_hexlower(unsigned int);
int handle_hexupper(unsigned int);
int handle_npch(char *);


#define BUF_SIZE 1024
#endif
