#include "holberton.h"
/**
* _puts - prints a string
*
* @str: string
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
* _putchar - writes the character c to stdout
*
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}