#include "main.h"
/**
 * _isupper - writes a function that checks for uppercase character.
 * @c: the int that will be used for this function
 * Return: 0
 */
int _isupper(int c)
{
	
	if (c >= 'A' && c <= 'Z')
	{
	_putchar(c);
	return (1);
	}
	else
	{
	return (0);
	}
}

