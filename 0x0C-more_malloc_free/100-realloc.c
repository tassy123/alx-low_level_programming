#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* print _realloc - reallocates a memory block using malloc and free
* @ptr: memory to reallocate
* @size: location size
* Return: always 0 (success)
*/

void print_realloc(char *realloc, unsigned int size)
{
unsigned int y;
y = 0;
while (y < size)
{
if (y % 10)
{
printf(" ");
}
if (!(y % 10) && y)
{
printf("\n");
}
printf("0x%02x", realloc[y]);
y++;
}
printf("\n");
}
/**
* main - check the code
* Return: always 0 (success)
*/

int main(void)
{
char *j;
int s;
j = malloc(sizeof(char) * 10);
j = _realloc(j, sizeof(char) * 10, sizeof(char) * 98);
s = 0;
while (s < 98)
{
j[s++] = 98;
}
print_realloc(j, 98);
free(j);
return(0);
}
