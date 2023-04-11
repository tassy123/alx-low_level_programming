#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* strtow - splits a string into words.
* @str: string to be split
* Return: empty
*/

char **strtow(char *str)
{
int j;
for (j = 0; j < str; ++j)
{
printf("%d\n", str[j]);
}
}
/**
* main - check the code for ALX School students.
* Return: 1 if an error occurred, 0 otherwise
*/
int main(void)
{
char **str;

str = strtow("      ALX School         #cisfun      ");
if (str == NULL)
{
printf("Failed\n");
return (1);
}
print_str(str);
return (0);
}
