#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at index of a listint_t linked list
* @head: pointer to the first element in the list
* @index: index of the node to delete
* Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *weq = *head;
listint_t *current = NULL;
unsigned int k = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(weq);
return (1);
}
while (k < index - 1)
{
if (!weq || !(weq->next))
return (-1);
weq = weq->next;
k++;
}
current = weq->next;
weq->next = current->next;
free(current);
return (1);
}
