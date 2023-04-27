#include "shell.h"

/**
 * _strncpy - copy a string
 * @dest: destination buffer to copy the string to
 * @src: source string to copy
 * @num_chars: maximum number of characters to copy from the source string
 *
 * Return: pointer to the destination buffer
 */
char *_strncpy(char *dest, const char *src, size_t num_chars)
{
size_t i;
for (i = 0; i < num_chars && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < num_chars; i++)
dest[i] = '\0';
return dest;
}
/**
 * _strncat - concatenate two strings
 * @dest: buffer to append the source string to
 * @src: string to append to the destination buffer
 * @max_chars: maximum number of characters to append from the source string
 *
 * Return: pointer to the destination buffer
 */
char *_strncat(char *dest, const char *src, size_t max_chars)
{
size_t dest_len = strlen(dest);
size_t i;
for (i = 0; i < max_chars && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return dest;
}

/**
 * _strchr - locate a character in a string
 * @str: string to search in
 * @target_char: character to look for
 *
 * Return: pointer to the first occurrence of the target character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(const char *str, int target_char)
{
do
{
if (*str == target_char)
return (char *) str;
}
while (*str++ != '\0');
return (NULL);
}
