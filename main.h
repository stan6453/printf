#ifndef _SANDS_PRINTF
#define _SANDS_PRINTF

int _printf(const char *, ...);
int _putchar(char c);
int handle_string(char *);
int handle_integer(int);
int handle_binary(unsigned int);

#define BUF_SIZE 1024
#endif
