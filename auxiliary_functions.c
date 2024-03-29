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

/**
* *_strcat - concatenates two strings
*
* @dest: pointer
*
* @src: pointer
*
* Return: string
*/
char *_strcat(char *dest, char *src)
{
	int i, len;

	if (dest == NULL)
	{
		return (NULL);
	}
	if (src == NULL)
	{
		return (dest);
	}
	for (len = 0; dest[len] != '\0'; )
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}

/**
* _strcmp - compares two strings
*
* @s1: pointer to string 1
*
* @s2: pointer to string 2
*
* Return: result
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len_dif;

	len_dif = _strlen(s1) - _strlen(s2);

	if (len_dif != 0)
	{
		return (len_dif);
	}
	while (s1[i])
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
