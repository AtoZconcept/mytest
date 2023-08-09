#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int _putchar(char c);
int *get_loc(char *arg);
int _printstring(char *str);
char *location(char *path, char *arg);
int _builtInCmd(char **arg);

#endif /* MAIN_H */
