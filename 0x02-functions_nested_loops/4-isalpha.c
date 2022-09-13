/*
 * File: 4-isalpha.c
 * Auth: Jabulani Tshabalala
 */

#include "main.h"

/**
 * main
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
