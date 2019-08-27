#include "holberton.h"
/**
* *read_line - reads user input
*
* Return: line that was read
*/
char *read_line(void)
{
	char *line = NULL;
	size_t buffer = 0;

	getline(&line, &buffer, stdin);

	return (line);
}
