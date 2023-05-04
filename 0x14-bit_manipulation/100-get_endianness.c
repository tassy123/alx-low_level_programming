
#include <stdio.h>
#include "main.h"
/**
* get_endianness - checks the endianness
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
unsigned int l = 1;
char *b;
b = (char *) &l; /* points to the first byte of the integer l */
if (*b == 1) /* 1st byte looks like 0x01 */
{
printf("Little Endian\n");
}
else /* 1st byte looks like 0x00 */
{
printf("Big Endian\n");
}
return (0);
}
