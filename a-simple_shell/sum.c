#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
* main - Entry point
* Description: This is a program that adds two numbers and prints
* the value of the sum of both numbers on the screen
*
* Returns: 0 if program is successful
*
*/

int main(void)
{
int firstValue = 10;
int secondValue = 20;
int sumTotal = firstValue + secondValue;
char output[100];
sprintf(output, "%i", sumTotal);
write(STDOUT_FILENO, output, strlen(output));

return (0);
}
