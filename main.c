#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "grid.h"

void main()
{
    char move;
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
    int W = 0;
    while (W == 0)
    {
        printf("Choisissez un mouvement : haut(z) bas(s) gauche(q) droite(d)\n");
        scanf("%c",&move);
        if (move != 'z' && move != 'q' && move != 's' && move != 'd' )
        {
            printf("Choix invalide...\n");
        }
        else
        {
            if (move == 'z')
            {
                if (pos_j.pos_y != 0)
                {
                    if (pos_j.pos_y == pos_b.pos_y+1 && pos_j.pos_x == pos_b.pos_x)
                    {
                        if (pos_b.pos_y != 0)
                        {
                            pos_b.pos_y--;
                            pos_j.pos_y--;
                        }
                    }
                    else
                    {
                        pos_j.pos_y--;
                    }
                }
            }
            else if (move == 's')
            {
                if (pos_j.pos_y != 7)
                {
                    if (pos_j.pos_y == pos_b.pos_y-1 && pos_j.pos_x == pos_b.pos_x)
                    {
                        if (pos_b.pos_y != 7)
                        {
                            pos_b.pos_y++;
                            pos_j.pos_y++;
                        }
                    }
                    else
                    {
                        pos_j.pos_y++;
                    }
                }
            }
            else if (move == 'q')
            {
                if (pos_j.pos_x != 0)
                {
                    if (pos_j.pos_x == pos_b.pos_x+1 && pos_j.pos_y == pos_b.pos_y)
                    {
                        if (pos_b.pos_x != 0)
                        {
                            pos_b.pos_x--;
                            pos_j.pos_x--;
                        }
                    }
                    else
                    {
                        pos_j.pos_x--;
                    }
                }
            }
            else if (move == 'd')
            {
                if (pos_j.pos_x != 7)
                {
                    if (pos_j.pos_x == pos_b.pos_x-1 && pos_j.pos_y == pos_b.pos_y)
                    {
                        if (pos_b.pos_x != 7)
                        {
                            pos_b.pos_x++;
                            pos_j.pos_x++;
                        }
                    }
                    else
                    {
                        pos_j.pos_x++;
                    }
                }
            }
        }
        grid(pos_j,pos_b,pos_obj);
    }
}