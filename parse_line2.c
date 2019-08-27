#include "holberton.h"
/**
* **parse_line2 - interprets user input
*
* @line: user input given by read function
*
* Return: tokens
*/
char **parse_line2(char *line)
{
	int buffer = 64;
	int i = 0;
	char *token;
	char **tokens = malloc(sizeof(char *) * buffer);

	if (tokens == NULL)
	{
		return (NULL);
	}
	token = strtok(line, ":");

	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, ":");
	}
	tokens[i] = NULL;

	return (tokens);
}
