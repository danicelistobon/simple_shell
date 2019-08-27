#include "holberton.h"
/**
* execute - executes arguments
*
* @args: arguments given by parse function
*
* @st: pointer to status
*
* Return: 0 on success or 1 on otherwise
*/
int execute(char **args, struct stat *st)
{
	char *path;

	path = getpath(args[0]);

	if (path != NULL && stat(path, st) == 0 && access(path, X_OK) == 0)
	{
		execve(path, args, NULL);

		return (0);
	}
	return (1);
}
