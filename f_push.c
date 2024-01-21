#include "monty.h"
/**
 * func_push - add node to the stack
 * @head: stack head
 * @counter: line number
 * Return: none
 */
void func_push(stack_t **head, unsigned int ctr)
{
	int a, b = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			b++;
		for (; bus.arg[b] != '\0'; j++)
			if (bus.arg[b] > 57 || bus.arg[b] < 48)
				flg = 1;
		if (flg == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", ctr);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, a);
	else
		addqueue(head, a);
}
