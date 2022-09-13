/*
 * File: 6-abs.c
 * Auth: Jabulani Tshabalala
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
