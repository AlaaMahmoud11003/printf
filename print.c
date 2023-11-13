#include "main.h"

/**
 * my_printf -  funtion that prints different data types
 * @form: string
 * Return: 1
 */
int my_printf(const char *form, ...)
{
	va_list arc;
	int f, num = 0;
	const char *ptr = form;
	bool mh;
	specifier_t format_spec[] = {{"c", myform_char}, {"s", myform_string},
		{"%", myform_percent}, {"d", myform_int}, {"i", myform_int}, {"b", myform_binary},
		{NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(argf, format);
	while (*ptr)
	{
		if (*ptr != '%')
		{
			num += _putchar(*ptr++);
			continue;
		}
		ptr++;
		if (*ptr == ' ' || *ptr == '\0')
			return (-1);
		mh = false;
		for (f = 0; format_spec[f].specifier != NULL; f++)
			if (*ptr == *(format_spec[f].specifier))
			{
				num += format_spec[f].f(arc);
				mh = true;
				break;
			}
		if (!mh)
		{
			num += my_putchar('%');
			num += my_putchar(*ptr);
		}
		ptr++;
	}
	va_end(arc);
	return (num);
}