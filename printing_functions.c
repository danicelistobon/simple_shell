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

/**
* print_error - prints error messages
*
* @prog: program name
*
* @loop_count: counter
*
* @line: user input given by read function
*
* Return: no return
*/
void print_error(char *prog, int loop_count, char *line)
{
	char *buffer;

	buffer = _itoa(loop_count);

	write(STDERR_FILENO, prog, _strlen(prog));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, buffer, _strlen(buffer));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, line, _strlen(line));
	write(STDERR_FILENO, ": ", 2);

	free(buffer);

	if (errno == EACCES)
	{
		write(STDERR_FILENO, "Permission denied\n", 18);
	}
	else
	{
		write(STDERR_FILENO, "not found\n", 10);
	}
}

/**
* _atoi - convert a string to a number
*
* @s: string to convert
*
* Return: number or 0 if string can't be converted
*/
int _atoi(char *s)
{
	int found = 0;
	unsigned int num = 0;
	int n = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			n *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (!found)
			{
				found = 1;
			}
			num = num * 10 + (*s - '0');
		}
		else
		{
			return (0);
		}
		s++;
	}
	return (num * n);
}

char *_itoa(int count)
{
	char *numstr;
	int tmp, digits;

	tmp = count;

	for (digits = 0; tmp != 0; digits++)
	{
		tmp /= 10;
	}
	numstr = malloc(sizeof(char) * (digits + 1));

	if (numstr == NULL)
	{
		perror("Fatal Error1");
		exit(127);
	}
	numstr[digits] = '\0';

	for (--digits; count; --digits)
	{
		numstr[digits] = (count % 10) + '0';
		count /= 10;
	}
	return (numstr);
}
