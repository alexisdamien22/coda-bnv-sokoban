#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void grid(pos pos_j,pos pos_b,pos pos_obj)
{
    char grid_org[8][8] = {{"        "},{"        "},{"        "},{"        "},{"        "},{"        "},{"        "},{"        "}};
    if ( pos_b.pos_x != pos_obj.pos_x || pos_b.pos_y != pos_obj.pos_y)
    {
        grid_org[pos_b.pos_y][pos_b.pos_x] = 'X';
        grid_org[pos_obj.pos_y][pos_obj.pos_x] = '.';
    }
    else 
    {
        grid_org[pos_b.pos_y][pos_b.pos_x] = '!';
    }
    grid_org[pos_j.pos_y][pos_j.pos_x]='O';
    int i = 0;
    printf("Joueur : %d %d\n",pos_j.pos_x+1,pos_j.pos_y+1);
    printf("Boite : %d %d\n",pos_b.pos_x+1,pos_b.pos_y+1);
    printf("Emplacement : %d %d\n",pos_obj.pos_x+1,pos_obj.pos_y+1);
    printf("# # # # # # # # # #\n");
    while(i<=7)
    {
        printf("# %c %c %c %c %c %c %c %c #\n",grid_org[i][0],grid_org[i][1],grid_org[i][2],grid_org[i][3],grid_org[i][4],grid_org[i][5],grid_org[i][6],grid_org[i][7]);
        i++;
    }
    printf("# # # # # # # # # #\n");
}