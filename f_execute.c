#include "monty.h"
/**
 * execute - executes the opcode
 * @stack: head linked list - stack
 * @count: line number
 * @file: pointer to monty file
 * @content: line content
 * Return: 1
 */
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_a opts[] = {
				{"push", func_push},
				{"pall", func_pall},
				{"pint", func_pint},
				{"pop", func_pop},
				{"swap", func_swap},
				{"add", func_add},
				{"nop", func_nop},
				{"mul", func_mul},
				{"queue", func_queue},
				{"stack", func_stack},
				{"sub", func_sub},
				{"rotr", func_rotr},
				{"rotl", func_rotl},
				{"pstr", func_pstr},
				{"pchar", func_pchar},
				{"mod", func_mod},
				{"div", func_div},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *opc;

	opc = strtok(content, "\n\t");
	if(opc && opc[0] == '#')
		return (0);
	bus.arg = strtok(NULL, "\n\t");
	while (opts[a].opcode && opc)
	{
		if (strcmp(opc, opts[a].opcode) == 0)
		{
			opts[a].f(stack, count);
			return (0);
		}
		a++;
	}
	if (opc && opts[a].opcode == NULL)
	{
		fprintf(stderr, "L%d: Unknown instruction %s\n", count, opc);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
