#include "monty.h"
/**
 * func_rotr - rotates the stack to the bottom
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
