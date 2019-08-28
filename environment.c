#include "holberton.h"
/**
* _getenv - gets environment variable
*
* @name: name of env variable to get
*
* Return: pointer to environment variable
*/
char *_getenv(const char *name)
{
	int length = strlen(name);
	char **p;
	char *env;

	p = environ;

	while (*p != NULL)
	{
		if (strncmp(*p, name, length) == 0)
		{
			env = *p + length;

			return (env);
		}
		p++;
	}

	return (NULL);
}
