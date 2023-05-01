#include "lists.h"

/**
* sum_listint - calculates the sum of all the data in a listint_t list
* @head: first node in the linked list
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
int mul = 0;
listint_t *weq = head;
while (weq)
{
mul += weq->n;
weq = weq->next;
}
return (mul);
}
