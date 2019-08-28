# Simple Shell

Simple shell is a command line interpreter. This shell is part of an exercise issued by Holberton School Medellin and includes basic functionalities of an UNIX like command line interface.

## Files

| File | Description |
| ------ | ------ |
| AUTHORS | Lists all individuals having contributed content to the repository |
| auxiliary_functions.c | Auxiliary functions for strings |
| builtins.c | Analyzes and runs the builtins |
| environment.c | Gets environment variable |
| execute.c | Executes arguments given by parse function |
| holberton.h | Header file with prototypes of functions |
| man_1_simple_shell | Manpage of our shell |
| parse_line.c | Interprets user input with the delimiter " \r\n\t" |
| parse_line2.c | Interprets user input with the delimiter ":" |
| path.c | Gets the full pathname |
| printing_functions.c | Auxiliary functions for printing |
| read_line.c | Reads user input |
| run.c | Creates process identification |
| shell.c | Main function of our shell |


## Compilation

This shell will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Testing

This shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Error output

Example of error with **_hsh_**:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

## Examples


### List of allowed functions and system calls

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)


## Authors
[Andrés David Patiño Calle](https://github.com/apatinoc4) | [Daniel Celis Tobon](https://github.com/danicelistobon)
