#include "main.h"

/**
 * print_hex - prints a number in hexadecimal base
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determins
 * if a flag is passed to _printf
 * Description: the nfunction calls convert() which in turn
 * converts the input number to the correct base as string.
 * Return: the number of char printed
 */

int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints a number in hexadecimal base,
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turn
 * converts the input number into correct base
 * Return: the number of char printed
 */

int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - print a number in base 2
 * @l: va_list arguments from _printf
 * @f: pointer to the struc that determines if
 * a flag is passed to _printf
 * Description: the function calls convert() which in
 * turn converts the input number into the correct base
 *
 * Return: the number of char printed
 */

int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines _printf flags
 * Description: the function calls convert() which in turn converts
 * input number to base 8 and returns it
 * Return: the number of char printed.
 */

int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}

