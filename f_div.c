#include "monty.h"
/**
 * func_div - divides the top two stack elements
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_div(stack_t **head, unsigned int count)
{
	stack_t *a;
	int ln = 0, axu;

	a = *head;
	while (a)
	{
		a = a->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	if (a->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	axu = a->next->n / a->n;
	a->next->n = axu;
	*head = a->next;
	free(a);
}
