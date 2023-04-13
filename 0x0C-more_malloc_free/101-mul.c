#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_array(int size);
char *iterate_zero(char *str);
void get_prod(char *mult, char *prod, int zero, int digit);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
* find_len - find the length of a string
* @str: string to measure
* Return: length of the string
*/

int find_len(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}


/**
* create_array - create array of char and initialize it with character of 'x'
* @size: size of array to initialize
* Return: a pointer to the array
*/
char *create_array(int size)
{
char *array;
int nit;
array = malloc(sizeof(char) * size);
if (array == NULL)
exit(98);
for (nit = 0; nit < (size - 1); nit++)
array[nit] = 'x';
array[nit] = '\0';
return (array);
}

/**
* iterate_zero - through a string of numbers containing leading
* zero until it hit non-zero
* @str: string of numbers
* Return: a pointer next to non-zero
*/
char *iterate_zero(char *str)
{
while (*str && *str == '0')
str++;
return (str);
}

/**
* get_digit - convert digit character to int
* @c: character to convert
* Return: converted int
*/
int get_digit(char c)
{
int digit = c - '0';
if (digit < 0 || digit > 9)
{
printf("Error\n");
exit(98);
}
return (digit);
}

/**
* get_prod - multiplies a string by a digit
* @prod: buffer the result will be stored
* @mult: string of numbers
* @digit: single digit
* @zero: number of leadind to zero
*/

void get_prod(char *mult, char *prod, int zero, int digit)
{
int mult_len, num, tens = 0;
mult_len = find_len(mult) - 1;
mult += mult_len;
while (*prod)
{
*prod = 'x';
prod++;
}
prod--;
while (zero--)
{
*prod = '0';
prod--;
}
for (; mult_len >= 0; mult_len--, mult--, prod--)
{
if (*mult < '0' || *mult > '9')
{
printf("Error\n");
exit(98);
}
num = (*mult - '0') * digit;
num += tens;
*prod = (num % 10) + '0';
tens = num / 10;
}
if (tens)
*prod = (tens % 10) + '0';
}

/**
* add_nums - add the numbers stored in twostrings
* @final_prod: buffer storing the final product
* @next_prod: next product to be added
* @next_len: length of next product
*/
void add_nums(char *final_prod, char *next_prod, int next_len)
{
int num, tens = 0;
while (*(final_prod + 1))
final_prod++;
while (*(next_prod + 1))
next_prod++;
for (; *final_prod != 'x'; final_prod--)
{
num = (*final_prod - '0') + (*next_prod - '0');
num += tens;
*final_prod = (num % 10) + '0';
tens = num / 10;
next_prod--;
next_len--;
}
for (; next_len >= 0 && *next_prod != 'x'; next_len--)
{
num = (*next_prod - '0');
num += tens;
*final_prod = (num % 10) + '0';
tens = num / 10;
final_prod--;
next_prod--;
}
if (tens)
*final_prod = (tens % 10) + '0';
}

/**
* main - multiplies two positive numbers
* @argv: number of arguments
* @argc: array of pointer
* Return: always 0
*/
int main(int argc, char *argv[])
{
char *final_prod, *next_prod;
int size, nit, digit, zero = 0;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (*(argv[1]) == '0')
argv[1] = iterate_zero(argv[1]);
if (*(argv[2]) == '0')
argv[2] = iterate_zero(argv[2]);
if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
{
printf("0\n");
return (0);
}
size = find_len(argv[1]) + find_len(argv[2]);
final_prod = create_array(size + 1);
next_prod = create_array(size + 1);
for (nit = find_len(argv[2]) - 1; nit >= 0; nit--)
{
digit = get_digit(*(argv[2] + nit));
get_prod(next_prod, argv[1], digit, zero++);
add_nums(final_prod, next_prod, size - 1);
}
for (nit = 0; final_prod[nit]; nit++)
{
if (final_prod[nit] != 'x')
putchar(final_prod[nit]);
}
putchar('\n');
free(next_prod);
free(final_prod);
return (0);
}
