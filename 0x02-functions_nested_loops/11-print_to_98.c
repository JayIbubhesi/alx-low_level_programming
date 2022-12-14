/*
 * File: 11-print_to_98.c
 * Auth: Jabulani Tshabalala
 */

#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from input to 98,
 * in order separsted by a comma
 * @n: the number to begin.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
