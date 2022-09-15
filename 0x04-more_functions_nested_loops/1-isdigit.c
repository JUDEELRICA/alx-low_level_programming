#include "main.h"
/**
 * _isdigit - writes a function that checks for a digit 0 to 9.
 * @c: is the int that will be used.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

