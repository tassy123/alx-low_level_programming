#include "lists.h"

/**
* add_nodeint_end - adds a node at the end of a list_t list
* @head: node to the first element in the list
* @n: data to insert in the new element
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *det;
listint_t *weq = *head;
det = malloc(sizeof(listint_t));
if (!det)
return (NULL);
det->n = n;
det->next = NULL;
if (*head == NULL)
{
*head = det;
return (det);
}
while (weq->next)
weq = weq->next;
weq->next = det;
return (det);
}
