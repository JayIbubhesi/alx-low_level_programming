#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
	printf("greater than 5\n");
}
else if (l == 0)
{
	printf("0\n";
}
else
{
	printf("less then 6 and not 0\n");
}
return (0);
}
