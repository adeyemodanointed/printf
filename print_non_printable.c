#include "main.h"

/**
 * print_non_printable - Print string with non-printable charaters
 * @list: list.
 *
 * Return: String length.
 */

int print_non_printable(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char*);
	p_len = _print((p != NULL) ? p : "(null)");

	return (p_len);
}

/**
 * _print_non_printable - print char.
 * @str: string.
 *
 * Return: string length.
 */
int _print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (!((str[i] > 0 && str[i] < 32) || str[i] >= 127))
		{
			print("\x");
			print_hexadecimal_upp(str[i]);
		}
		else
			_putchar(str[i]);
	}

	return (i);
}
