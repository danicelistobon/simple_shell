#include "holberton.h"
/**
* main - main function of our shell
*
* @argc: number of things in the command line (unused)
*
* @argv: array of string values
*
* Return: 0 on success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	char *line = NULL;
	char **args = NULL;
	char *str = "#cisfun$ ";
	int status;
	int loop_count = 1;
	pid_t _loop;

	signal(SIGINT, SIG_IGN);

	do {
		if (isatty(STDIN_FILENO))
		{
			_puts(str);
		}
		line = read_line();

		if (line == NULL)
		{
			/**free(line);*/
			errno = EINVAL, perror(argv[0]);
			return (-1);
		}
		args = parse_line(line);

		if (_strcmp(args[0], "exit") == 0)
		{
			status = args[1] == NULL ? 0 : _atoi(args[1]);
			free(line), free(args);
			return (status);
		}
		_loop = run(argv[0], line, args, loop_count);

		free(line);
		free(args);

		loop_count++;

	} while (_loop > 0);

	return (0);
}
