#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void add_link(pos **list, int pos_x, int pos_y, int pos_t)
{
	pos *tmp = *list;
	while(tmp->next != NULL)
	{
		if(tmp->next->pos_t == pos_t)
		{
			pos *item = malloc(sizeof(*item));
        	item->pos_x = pos_x;
			item->pos_y = pos_y;
        	item->next = tmp->next->next->next;
            tmp->next->next = item;
		}

		tmp = tmp->next;
	}
}

void add_to_end(pos **list, int pos_x, int pos_y)
{
	pos *tmp = *list;

	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	pos *item = malloc(sizeof(*item));
	item->pos_x = pos_x;
	item->pos_y = pos_y;
	item->next = NULL;

	tmp->next = item;
}

pos *create_list(int pos_x,int pos_y)
{
	pos *first = malloc(sizeof(*first));
	first->pos_x = pos_x;
	first->pos_y = pos_y;
	first->next = NULL;

	return first;
}

void delete_list(pos **list)
{
	pos *tmp = *list;

	while(tmp != NULL)
	{
		pos *to_remove = tmp;
		tmp = tmp->next;
		free(to_remove);
	}
}

void display_list(pos **list)
{
	pos *tmp = *list;

	while(tmp != NULL)
	{
		printf("X : %d\n", tmp->pos_x);
		printf("Y : %d\n", tmp->pos_y);
		tmp = tmp->next;
	}
}

void remove_link(pos **list, int pos_t)
{
	pos *tmp = *list;

	while(tmp->next != NULL)
	{
		if(tmp->next->pos_t== pos_t)
		{
			pos *to_remove = tmp->next;
			tmp->next = to_remove->next;
			free(to_remove);
		}

		tmp = tmp->next;
	}
}