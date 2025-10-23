#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void grid(pos pos_j,pos pos_b,pos pos_obj)
{
    char grid_org[8][8] = {{"        "},{"        "},{"        "},{"        "},{"        "},{"        "},{"        "},{"        "}};
    grid_org[pos_j.pos_y][pos_j.pos_x]='O';
    grid_org[pos_b.pos_y][pos_b.pos_x]='X';
    grid_org[pos_obj.pos_y][pos_obj.pos_x]='.';
    int i = 0;
    printf("##########\n");
    while(i<=7)
    {
        printf("#%c%c%c%c%c%c%c%c#\n",grid_org[i][0],grid_org[i][1],grid_org[i][2],grid_org[i][3],grid_org[i][4],grid_org[i][5],grid_org[i][6],grid_org[i][7]);
        i++;
    }
    printf("##########\n");
}