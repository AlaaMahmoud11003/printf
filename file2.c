#include "main.h"

/**
 * myform_string - function that handles %s specifier
 * @arc: string
 * Return: 
 */
int myform_string(va_list arc)
{
	char *z = va_arg(arc, char *);

	if (z == NULL)
		return (my_puts("(null)"));
	return (my_puts(z));
}

/**
 * myform_percent - function that prints % char
 * @arc: char
 * Return: 1
 */
int myform_percent(va_list arc)
{
	(void) arc;

	return (my_putchar('%'));
}

/**
 * myform_int - function that handles &d and %i specifier
 * @arc: int
 * Return: 1
 */
int myform_int(va_list arc)
{
	int n = va_arg(arc, int);

	return (myprint_int(n));
}
/**
 * myform_binary - function that handles %b specifier
 * @arc: char
 * Return: 1
 */
int myform_binary(va_list arc)
{
	int b = va_arg(arc, int);

	return (myprint_binary(b));
}
