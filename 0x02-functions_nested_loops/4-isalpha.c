#include <stdio.h>
/**
 * main
 *
 * Return: 0
 */
int -isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
