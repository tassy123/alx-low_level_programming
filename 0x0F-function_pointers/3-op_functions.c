#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - returns the sum of two numbers
* @a: first num
* @b: second num
* Return: the sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - return diff of two nums
* @a: first numb
* @b: second num
* Return: diff of a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - returns mult of two nums
* @a: first numb
* @b: second numb
* Return: mult of two nums
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - returns division of two nums
* @a: first numb
* @b: second numb
* Return: divion of two nums
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mul - returns remainder of division of two nums
* @a: first numb
* @b: second numb
* Return: remainder of two nums
*/
int op_mod(int a, int b)
{
return (a % b);
}
