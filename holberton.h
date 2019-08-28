#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

extern char **environ;
char *read_line(void);
char **parse_line(char *line);
char **parse_line2(char *line);
pid_t run(char *prog, char *line, char **args, int loop_count);
int execute(char **args, struct stat *st);
int builtins(char *line);
void printenv(void);
char *getpath(char *args);
char *_getenv(const char *name);
void _puts(char *str);
int _putchar(char c);
void print_error(char *prog, int loop_count, char *line);
int _atoi(char *s);
int _strlen(char *s);
int _strfind(char c, char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);

#endif
