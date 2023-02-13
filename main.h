#ifndef _MAIN_H
#define _MAIN_H

extern char **environ;

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/wait.h>

char **split_str(char *str);
void simple_shell(char *prog_Name);
int _strlen(const char *str);
char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, const char *src);
int count_words(char **str);
int _setenv(const char *key, const char *value, int overwrite);
char *_getenv(const char *key);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void chk_interactivity(char *shell_var, char *term_var);
int _strcmp(char *str1, char *str2);

#endif
