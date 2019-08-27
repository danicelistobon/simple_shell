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

/**
* _strfind - find a character in a string
*
* @c: character to find
*
* @s: string
*
* Return: 1 if found or 0 on otherwise
*/
int _strfind(char c, char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (1);
		}
		s++;
	}
	return (0);
}

/**
* *_strcpy - copies the str pointed to by src to the buffer pointed to by dest
*
* @dest: destination string
*
* @src: source string
*
* Return: pointer to destination string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
	{
		return (NULL);
	}
	if (src == NULL)
	{
		return (dest);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
