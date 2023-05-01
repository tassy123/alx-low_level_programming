#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t list
* and returns the head node’s data (n).
* @head: node to the first element in the linked list
* Return: the data inside the elements that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *weq;
int ret;
if (!head || !*head)
return (0);
ret = (*head)->n;
weq = (*head)->next;
free(*head);
*head = weq;
return (ret);
}
