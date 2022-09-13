#include <stdio.h>
/**
 * main
 *
 * Return
 */
int print_last_digit(int)
{
	int ln = n % 10;
	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
