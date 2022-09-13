#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}
