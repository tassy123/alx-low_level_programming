#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins
* to make change for an amount of money.
* @argc: number of argument supplied to the program
* @argv: an array of pointers to the argument
* Return: if the number of argument is not exactly - 1,
* otherwise - 0
*/

int main(int argc, char *argv[])
{
int cen, con = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cen = atoi(argv[1]);
while (cen > 0)
{
con++;
if ((cen - 25) >= 0)
{
cen -= 25;
continue;
}
if ((cen - 10) >= 0)
{
cen -= 10;
continue;
}
if ((cen - 5) >= 0)
{
cen -= 5;
continue;
}
if ((cen - 2) >= 0)
{
cen -= 2;
continue;
}
cen--;
}
printf("%d\n", con);
return (0);
}
