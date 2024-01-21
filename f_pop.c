#include "monty.h"
/**
 * func_pop - prints the top
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_pop(stack_t **head, unsigned int count)
{
	stack_t *a;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	*head = h->next;
	free(a);
}
