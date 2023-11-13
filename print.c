#include "main.h"

/**
 * _printf -  funtion that prints different data types
 * @form: string
 * Return: 1
 */
int _printf(const char *form, ...)
{
	va_list arc;
	int i, num = 0;
	const char *ptr = form;
	bool mh;
	specifier_t format_spec[] = {{"c", myform_char}, {"s", myform_string},
		{"%", myform_percent}, {"d", myform_int}, {"i", myform_int}, {"b", myform_binary},
		{NULL, NULL}};

	if (form == NULL)
		return (-1);
	va_start(arc, form);
	while (*ptr)
	{
		if (*ptr != '%')
		{
			num += my_putchar(*ptr++);
			continue;
		}
		ptr++;
		if (*ptr == ' ' || *ptr == '\0')
			return (-1);
		mh = false;
		for (i = 0; format_spec[i].specifier != NULL; i++)
			if (*ptr == *(format_spec[i].specifier))
			{
				num += format_spec[i].f(arc);
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
