#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int _putchar(char c);
void _puts(char *str);
char *read_line(void);
char **parse_line(char *line);
int execute(char **args);

#endif
