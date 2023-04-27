#include "shell.h"

/**
 * print_string_to_stderr - prints a string to stderr
 * @str: the string to be printed
 *
 * Return: void
 */
void print_string_to_stderr(char *str)
{
int i = 0;
if (!str)
return;
while (str[i] != '\0')
{
write_char_to_stderr(str[i]);
i++;
}
}

/**
 * write_char_to_stderr - writes a character to stderr
 * @c: the character to print
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int write_char_to_stderr(char c)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(STDERR_FILENO, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}

/**
 * write_char_to_fd - writes a character to a specified file descriptor
 * @c: the character to print
 * @fd: the file descriptor to write to
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int write_char_to_fd(char c, int fd)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(fd, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
