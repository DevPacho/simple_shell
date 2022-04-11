#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>

void _exit_(char *line);
char **_strtok_(char *line, char token);
int _strcmp_(char *s1, char *s2);

#endif
