#include "holberton.h"
/**
* main - main function of our shell
*
* Return: 0 on success
*/
int main(void)
{
	char *line;
	char **args;
	char *str = "#cisfun$ ";
	int status;

	do {
		_puts(str);

		line = read_line();
		args = parse_line(line);
		status = execute(args);

		free(line);
		free(args);

	} while (status);

	return (0);
}
