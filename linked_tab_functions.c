#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void add_link(number **list, int value, int pos)
{
	number *tmp = *list;
	while(tmp->next != NULL)
	{
		if(tmp->next->value == pos)
		{
			number *item = malloc(sizeof(*item));
        	item->value = value;
        	item->next = tmp->next->next->next;
            tmp->next->next = item;
		}

		tmp = tmp->next;
	}
}

void add_to_end(number **list, int value)
{
	number *tmp = *list;

	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	number *item = malloc(sizeof(*item));
	item->value = value;
	item->next = NULL;

	tmp->next = item;
}

number *create_list(int value)
{
	number *first = malloc(sizeof(*first));
	first->value = value;
	first->next = NULL;

	return first;
}

void delete_list(number **list)
{
	number *tmp = *list;

	while(tmp != NULL)
	{
		number *to_remove = tmp;
		tmp = tmp->next;
		free(to_remove);
	}
}

void display_list(number **list)
{
	number *tmp = *list;

	while(tmp != NULL)
	{
		printf("Nb : %d\n", tmp->value);
		tmp = tmp->next;
	}
}

void remove_link(number **list, int value)
{
	number *tmp = *list;

	while(tmp->next != NULL)
	{
		if(tmp->next->value == value)
		{
			number *to_remove = tmp->next;
			tmp->next = to_remove->next;
			free(to_remove);
		}

		tmp = tmp->next;
	}
}