#include "shell.h"

/**
 * print_env - prints the present environment
 * @info: Pointer to a struct containing command information and arguments
 *
 * Return: Always 0
 */
int print_env(info_t *info)
{
print_list_str(info->env_list);
return (0);
}

/**
 * get_env_var - gets the value of an environment variable
 * @info: Pointer to a struct containing command information and arguments
 * @name: environment variable name
 *
 * Return: the value of the variable
 */
char *get_env_var(info_t *info, const char *name)
{
list_t *node = info->env_list;
char *p;
while (node)
{
p = starts_with(node->str, name);
if (p && *p)
return (p);
node = node->next;
}
return (NULL);
}
/**
 * set_env_var - modifies an existing environment variable or sets a new one
 * @info: Pointer to a struct containing command information and arguments
 *
 * Return: 1 on success, 0 if it fails
 */
int set_env_var(info_t *info)
{
if (info->argc != 3)
{
_eputs("wrong number of arguments\n");
return (0);
}
if (_setenv(info, info->argv[1], info->argv[2]))
return (1);
return (0);
}

/**
 * unset_env_var - unset an environment variable
 * @info: Pointer to a struct containing command information and arguments
 *
 * Return: Always 0
 */
int unset_env_var(info_t *info)
{
int i;
if (info->argc == 1)
{
_eputs("Too few arguments.\n");
return (1);
}
for (i = 1; i <= info->argc; i++)
_unsetenv(info, info->argv[i]);
return (0);
}

/**
 * populate_env_list - populates a linked list's environment
 * @info: Pointer to a struct containing command information and arguments
 * Return: 0
 */
int populate_env_list(info_t *info)
{
list_t *node = NULL;
size_t i;
for (i = 0; environ[i]; i++)
add_node_end(&node, environ[i], 0);
info->env_list = node;
return (0);
}
