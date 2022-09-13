/**
 * File: 1-alphabet.c
 * Auth: Jabulani Tshabalala
 */
#include "main.h"

/**
 * print the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
