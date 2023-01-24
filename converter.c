#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */

char *convert(unsighed long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
	*prt = '\0';

	do {
		**--ptr = rep[nnum % base];
		num /= base;
	} while (num != 0)

	return (ptr);
}
