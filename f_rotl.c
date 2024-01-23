#include "monty.h"
/**
 * func_rotl - rotates the stack to the top
 * @head: stack head
 * @count: line number
 * Return: none
 */
void func_rotl(stack_t **head, __attribute__((unused))unsigned int count)
{
	stack_t *temp = *head, *axu;

	if (*head == NULL || (*head)->next == NULL)
		return;
	axu = (*head)->next;
	axu->prev = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = axu;
}
