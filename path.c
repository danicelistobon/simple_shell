#include "holberton.h"
/**
* getpath - gets the full pathname
*
* @args: arguments given
*
* Return: full pathname or NULL if not found
*/
char *getpath(char *args)
{
	char *path;
	static char temp[200];
	char **tokens;
	int i;
	struct stat st;

	if (args == NULL)
		return (NULL);
	if (_strfind('/', args) || _strfind('.', args))
		return (args);
	path = malloc(200);
	if (path == NULL)
		return (NULL);
	_strcpy(path, _getenv("PATH"));
	if (path[0] == ':')
	{
		_strcpy(temp, "./");
		_strcat(temp, args);
		if (access(temp, F_OK | X_OK) == 0)
			return (temp);
	}
	tokens = parse_line2(path);
	for (i = 0; tokens[i] != NULL; i++)
	{
		_strcpy(temp, tokens[i]);
		_strcat(temp, "/");
		_strcat(temp, args);
		if (stat(temp, &st) == 0)
		{
			args = temp;
			return (args);
		}
	}
	free(path);
	free(tokens);
	return (NULL);
}
