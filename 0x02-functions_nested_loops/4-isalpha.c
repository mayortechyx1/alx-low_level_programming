#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 *  @c: parameter considered
 *
 *  Return: 1 if c is an alphabet otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
