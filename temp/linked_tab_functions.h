#ifndef __ADD_LINK_H__
#define __ADD_LINK_H__

void add_link(pos **list, int pos_x, int pos_y, int pos_t);
void add_to_end(pos **list, int pos_x,int pos_y);
pos *create_list(int pos_x,int pos_y);
void delete_list(pos **list);
void display_list(pos **list);
void remove_link(pos **list, int pos_t);

#endif