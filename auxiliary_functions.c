#include "holberton.h"
/**
* _strlen - returns the length of a string
*
* @s: pointer to string
*
* Return: length
*/
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (-1);
	}
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
