#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a string containing special characters and the specifiers.
 * Description: this function uses get_print to substitute values.
 * Return: int, the length of the formated output string
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

	int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]) || 
			(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while(get_flag(*p, &flags))
				p++;

			pfunc = (get_flags(*p, &flags));
			count += (pfunc) ? pfunc(arguments, &flags) : _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
