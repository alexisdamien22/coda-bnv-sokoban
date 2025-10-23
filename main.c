#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "grid.h"

void main()
{
    pos pos_b;
    pos pos_j;
    pos pos_obj;
    pos_obj.pos_x = 6;
    pos_obj.pos_y = 2;
    pos_b.pos_x = 1;
    pos_b.pos_y = 1;
    pos_j.pos_x = 3;
    pos_j.pos_y = 4;
    grid(pos_j,pos_b,pos_obj); 
}