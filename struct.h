#ifndef TESTS_STRUCT_H
#define TESTS_STRUCT_H

typedef struct s_pos pos;

struct s_pos
{
	int pos_y;
    int pos_x;
    pos *next;
};

#endif //TESTS_STRUCT_H