#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase characters
 * @c: character to be checked
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
