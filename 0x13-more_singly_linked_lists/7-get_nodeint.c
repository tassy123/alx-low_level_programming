#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a
* certain index in a listint_t list
* @head: first node in the linked list
* @index: index of the node to return
* Return: pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int ret = 0;
listint_t *weq = head;
while (weq && ret < index)
{
weq = weq->next;
ret++;
}
return (weq ? weq : NULL);
}
