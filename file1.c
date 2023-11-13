#include "main.h"
#include <unistd.h>

/**
 * my_putchar - function that writes char to output
 * @b: char that to print
 * Return: 1 sucessed -1 otherwise
 */
int my_putchar(char b)
{
	if (b == -1)
		return (0);
	return (write(1, &b, 1));
}

/**
 * my_puts - function that prints string on output
 * @x: string 
 * Return: num
 */
int my_puts(char *x)
{
	int num = 0;

	while (*x != '\0')
	{
		my_putchar(*x);
		x++;
		num++;
	}
	return (num);
}
/**
 * myform_char - function that handles %c specifier
 * @arc: print
 * Return: 1 or -1
 */
int myform_char(va_list arc)
{
	int n = va_arg(arc, int);

	if (n >= 0)
		return (my_putchar(n));
	return (0);
}

