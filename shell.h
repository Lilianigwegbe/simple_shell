#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>


typedef struct liststr
{
int num;
char *str;
struct liststr *next;
} 
list_t;
int execute(char **arguments, int no_of_args, char **envp);
char **split_string(char *str, char *delim, size_t *word_count);
int _setenv(const char *name, const char *value, int overwrite);
int _atoi(char *s);
char *check_file_in_path(char *pathname, struct stat *statbuf);
char *strs_concat(int args_no, const char *s1, const char *s2, ...);
char *_getenv(char *name);
void _printenv(void);
ssize_t _getline(char **restrict lineptr, size_t *restrict n,FILE *restrict stream);
char *_memcpy(char *dest, char *src, unsigned int n);
void update_pwd(char *new_pwd);
char *check_separator(char *str, char **str_ptr);
void handle_error(pid_t pid);
int _strlen(const char *s);
void handle_cd(char **cd_args, size_t no_of_args);
void set_zeros(unsigned int *arr, size_t size);
char *str_concat(char *s1, char *s2);
int words_count(char *str, char *delim, unsigned int *arr);
int _strncmp(const char *s1, const char *s2, size_t n);
void free_vector(char **vec, int len);
void handle_exit(char **exit_args, size_t no_of_args);
void *_realloc(void *ptr, unsigned int old_size, size_t new_size);
void handle_env(char **env_args, size_t no_of_args);

#endif

