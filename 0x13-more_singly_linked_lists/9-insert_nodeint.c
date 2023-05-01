#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
* Return: pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *new;
listint_t *weq = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (k = 0; weq && k < idx; k++)
{
if (k == idx - 1)
{
new->next = weq->next;
weq->next = new;
return (new);
}
else
weq = weq->next;
}
return (NULL);
}
