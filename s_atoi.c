#include "shell.h"
/**
 * _atoi - Converts a string to an integer.
 * Main - Entry point
 * @str: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(const char *str)
{
int value = 1;
int num = 0;
if (*str == '\0')
return (0);
if (*str == '-')
{
value = -1;
str++;
}
else if (*str == '+')
{
str++;
}
while (*str >= '0' && *str <= '9')
{
num = num * 10 + (*str - '0');
str++;
}
return (value *num);
}

