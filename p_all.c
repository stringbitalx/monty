#include "monty.h"

/**
 * func_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: none
 */
void func_pall(stack_t **head, unsigned int ctr)
{
	stack_t *h;
	(void)ctr;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf ("%d\n", h->n);
		h = h->next;
	}
}
