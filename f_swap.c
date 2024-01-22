#include "monty.h"
/**
 * func_swap - adds top two stack elements
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_swap(stack_t **head, unsigned int count)
{
	stack_t *a;
	int len = 0, axu;

	a = *head;
	while (a)
	{
		a = a->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't  swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	axu = a->n;
	a->n = a->next->n;
	a->next->n = axu;
}
