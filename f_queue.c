#include "monty.h"
/**
 * func_queue - prints the top
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @a: new value
 * @head: stack head
 * Return: none
 */
void addqueue(stack_t **head, int a)
{
	stack_t *new_node, *axu;

	axu = *head;
	new_node  = malloc(sizeof(stack_t));
	if (new_node == NULL)
		printf("Error\n");
	new_node->n = a;
	new_node->next = NULL;
	if (axu)
		while (axu->next)
			axu = axu->next;
	if (!axu)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		axu->next = new_node;
		new_node->prev = axu;
	}
}
