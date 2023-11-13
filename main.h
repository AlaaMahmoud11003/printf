#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * struct specifier - the structure for specifier
 * @specifier: the format of specifier
 * @funse: function selection
 */
typedef struct specifier
{
	const char *specifier;
	int (*funse)(va_list);
} specifier_t;

int my_printf(const char *form, ...);
int my_putchar(char b);
int my_puts(char *x);
int myform_char(va_list arc);
int myform_string(va_list arc);
int myform_percent(va_list arc);
int myform_int(va_list arc);
int myform_binary(va_list arc);
int myprint_binary(unsigned int n);
int myprint_int(int i);

#endif
