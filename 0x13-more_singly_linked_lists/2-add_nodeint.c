#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of the funcion
 * @head: Head of the fucntion
 * @n: data to insert inthat new node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lean;

	lean = malloc(sizeof(listint_t));
	if (!lean)
		return (NULL);
	lean->n = n;
	lean->next = *head;
	*head = lean;
return (lean);
}
