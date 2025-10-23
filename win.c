#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int win(pos pos_j,pos pos_b,pos pos_obj)
{
    if(pos_b.pos_x == 0 && pos_obj.pos_x != 0)
    {
        return -1;
    }
    else if(pos_b.pos_y == 0 && pos_obj.pos_y != 0)
    {
        return -1;
    }
    else if(pos_b.pos_x == 7 && pos_obj.pos_x != 7)
    {
        return -1;
    }
    else if(pos_b.pos_y == 7 && pos_obj.pos_y != 7)
    {
        return -1;
    }
    else if(pos_b.pos_y == pos_obj.pos_y && pos_b.pos_x == pos_obj.pos_x)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}