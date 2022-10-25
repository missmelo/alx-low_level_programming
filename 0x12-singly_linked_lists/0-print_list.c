#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: pointer to list_t struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *ptr = NULL;
	char *nil = "(nil)";
	
	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%d] %s\n", 0, nil);
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		i++;
	}
	return (i);
}