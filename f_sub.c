#include "monty.h"
/**
 * func_sub - subtraction
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_sub(stack_t **head, unsigned int count)
{
	stack_t *axu;
	int sub, nodes;

	axu = *head;
	for (nodes = 0; axu != NULL; nodes++)
		axu = axu->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't su, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	axu = *head;
	sub = axu->next->n - axu->n;
	axu->next->n = sub;
	*head = axu->next;
	free(axu);
}
