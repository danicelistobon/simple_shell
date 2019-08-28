#include "holberton.h"
/**
* builtins - analyzes the builtins
*
* @line: user input given by read function
*
* Return: 0 on success or 1 on otherwise
*/
int builtins(char *line)
{
	if (line == NULL)
	{
		return (1);
	}
	if (_strcmp(line, "env") == 0)
	{
		printenv();
		return (0);
	}
	if (_strcmp(line, "help") == 0)
	{
		_puts("\n	Holberton Shell - hsh, version 1.0\n\n");
		_puts(" These shell commands are defined internally.  Type 'help' to\n");
		_puts(" see this list.\n\n");
		_puts("   exit [n]\n");
		_puts("   env\n");
		/**_puts("   cd [-L|[-P [-e]] [-@]] [dir]\n");*/
		_puts("   help [-dms] [pattern ...]\n\n");
		_puts(" Type 'help name' to find out more about the function 'name'.\n\n");
		_puts(" Use the 'man' command for information on other programs.\n\n");
		return (0);
	}
	return (1);
}

/**
* printenv - prints the environment of a process
*
* Return: void
*/
void printenv(void)
{
	unsigned int i, j;

	i = 0;

	while (environ[i] != NULL)
	{
		j = 0;

		while (environ[i][j] != '\0')
		{
			_putchar(environ[i][j]);

			j++;
		}
		_putchar('\n');

		i++;
	}
}
