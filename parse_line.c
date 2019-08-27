#include "holberton.h"
/**
* **parse_line - interprets user input
*
* @line: user input given by read function
*
* Return: tokens
*/
char **parse_line(char *line)
{
	int buffer = 64;
	int i = 0;
	char *token;
	char **tokens = malloc(sizeof(char *) * buffer);

	if (!tokens)
	{
		perror("lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, " \r\n\t");

	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		if (i >= buffer)
		{
			buffer += 64;

			tokens = realloc(tokens, sizeof(char *) * buffer);

			if (!tokens)
			{
				perror("lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, " \r\n\t");
	}
	tokens[i] = NULL;

	return (tokens);
}
