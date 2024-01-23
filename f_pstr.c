#include "monty.h"
/**
 * func_pstr - prints string from the stack top
 * @head: stack head
 * @count: line number
 * return: none
 */
void func_pstr(stack_t **head, unsigned int count)
{
	stack_t *a;
	(void)count;

	a = *head;
	while (a)
	{
		if (a->n > 127 || a->n <= 0)
			break;
		printf("%c", a->n);
		a = a->next;
	}
	printf("\n");
}
