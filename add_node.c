#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: stack head
 * @a: new value
 * Return: none
 */
void addnode(stack_t **head, int a)
{
	stack_t *new_node, *axu;

	axu = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (axu)
		axu->prev = new_node;
	new_node->n = a;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
