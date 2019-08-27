#include "holberton.h"
/**
* execute - executes arguments
*
* @args: arguments given by parse function
*
* Return: status(1)
*/
int execute(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("lsh");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("lsh");
	}
	else
	{
			wait(&status);
	}

	return (1);
}
