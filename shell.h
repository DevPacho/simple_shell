#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#define bufsize 1024

void _exit_(char *line);
void _freestrs(char **str);
void _execute(char **array_token);
int _strcmp_(char *s1, char *s2);
int _builtin_(char **path, char *cmd);
char *_findpath_(char **env);
char *_strcat_(char *dest, char *src);
char *_strcpy_(char *dest, char *src);
char **_strtok_(char *line, char token);

#endif
