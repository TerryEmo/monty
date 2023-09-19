#include "monty.h"
/**
 * f_pstr - Printing the str that will beggin at the top of the pile
 * @head: Pile head
 * @counter: Line num
 * Return: Zero return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
