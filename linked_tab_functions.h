#ifndef __FUNCIO_H__
#define __FUNCIO_H__

void add_link(number **list, int value, int pos);
void add_to_end(number **list, int value);
number *create_list(int value);
void delete_list(number **list);
void display_list(number **list);
void remove_link(number **list, int value);

#endif