#include "monty.h"

/**
 * free_stack - function that frees a doubly linked list
 * @head: stack head
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - function
 * @head: stack head
 * @counter: line count
 * Return: void
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void) head;
	(void) counter;
	bus.lifi = 0;
}
