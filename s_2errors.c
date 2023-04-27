#include "shell.h"
/**
 * print_d - function prints a decimal (integer) number (base 10)
 * @input: the input
 * @fd: the filedescriptor to write to
 *
 * Return: number of characters printed
 */
int print_d(int input, int fd)
{
int (*print_char)(char) = fd == STDERR_FILENO ? _eputchar : _putchar;
int i, count = 0;
unsigned int _abs_, current;
if (input < 0)
{
_abs_ = -input;
print_char('-');
count++;
}
else
_abs_ = input;
current = _abs_;
for (i = 1000000000; i > 1; i /= 10)
{
if (_abs_ / i)
{
print_char('0' + current / i);
count++;
}
current %= i;
}
print_char('0' + current);
count++;
return (count);
}
