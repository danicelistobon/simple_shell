#include "holberton.h"
/**
* *read_line - reads user input
*
* Return: line that was read
*/
char *read_line(void)
{
	char *line = NULL;
	int function_return = 0;
	size_t buffer = 0;

	function_return = getline(&line, &buffer, stdin);

	if (function_return == -1 || function_return == EOF)
	{
		free(line);
		exit(EXIT_FAILURE);
	}
	return (line);
}
