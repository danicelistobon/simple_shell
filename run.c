#include "holberton.h"
/**
* run - creates pid
*
* @prog: program name
*
* @line: user input given by read function
*
* @args: arguments given by parse function
*
* @loop_count: counter
*
* Return: 0 on success or -1 on error
*/
pid_t run(char *prog, char *line, char **args, int loop_count)
{
	pid_t pid;
	int status;
	struct stat st;

	/**
	*if (*args == NULL)
	*{
	*	return (1);
	*}
	*/
	pid = fork();

	if (pid == 0)
	{
		if (builtins(line) == 1)
		{
			if (execute(args, &st) == 1)
			{
				print_error(prog, loop_count, line);
			}
		}
	}
	else if (pid == -1)
	{
		errno = ECHILD, perror(prog);
		return (-1);
	}
	else
	{
		wait(&status);
	}

	return (pid);
}
