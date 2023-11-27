#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *tardy = list;
	listint_t *rapid = list;

	if (!list)
		return (0);

	while (tardy && rapid && rapid->next)
	{
		tardy = tardy->next;
		rapid = rapid->next->next;
		if (tardy == rapid)
			return (1);
	}

	return (0);
}
