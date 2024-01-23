#include "monty.h"
/**
 * func_pchar - prints char at stack top
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_pchar(stack_t **head, unsigned int count)
{
	stack_t *a;

	a = *head;
	if (!a)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (a->n > 127 || a->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", a->n);
}
