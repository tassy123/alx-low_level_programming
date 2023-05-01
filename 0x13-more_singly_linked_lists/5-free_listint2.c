#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: list to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
listint_t *weq;
if (head == NULL)
return;
while (*head)
{
weq = (*head)->next;
free(*head);
*head = weq;
}
*head = NULL;
}
