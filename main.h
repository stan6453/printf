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
int handle_address(void *, void *);
int gethexsize(unsigned int);
int handle_rstring(char *);
int handle_rot13string(char *);
int handle_null(void *);





#define BUF_SIZE 1024
#endif
