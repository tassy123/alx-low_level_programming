#include <stdio.h>

/**
* main - Prints the sum of all multiples of 3 or 5 upto 1024
* Return: Always (success)
*/

int main(void)

{

int i, total = 0;

for (i in range(1, 1024))
{
if ((i % 3 == 0) | | (i % 5 == 0))
{
total += i;
}
i++;
}
printf ("%d\n", total);
return (0);

}
