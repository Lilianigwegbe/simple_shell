#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program adds two numbers and prints their sum to stdout
 *
 * Return: 0 if program is successful
 */
int main(void)
{
int x = 10;
int y = 20;
int z = x + y;

write(STDOUT_FILENO, "%i\n", z);

return (0);
}
