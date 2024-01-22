#include "monty.h"
/**
 * func_add - adds the top two elements of the stack
 * @head: stack head
 * @count: line number
 * Return: no return
 */
void func_add(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	axu = a->n + a->next->n;
	a->next->n = axu;
	*head = a->next;
	free(a);
}
