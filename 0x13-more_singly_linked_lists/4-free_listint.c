#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
listint_t *weq;
while (head)
{
weq = head->next;
free(head);
head = weq;
}
}
