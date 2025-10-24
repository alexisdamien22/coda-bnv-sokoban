#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "struct.h"
#include "grid.h"
#include "win.h"
#include "linked_tab_functions.c"

void main()
{
    srand(time(NULL));
    int t = 0;
    char move;
    pos pos_b;
    pos pos_j;
    pos pos_obj;
    pos init_pos_j;
    pos init_pos_b;
    pos init_pos_obj;
    init_pos_obj.pos_x = rand() % 7;
    init_pos_obj.pos_y = rand() % 7;
    if (init_pos_obj.pos_x == 0)
    {
        if (init_pos_obj.pos_y == 0)
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 6;
                init_pos_b.pos_y = rand() % 6;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
        else if (init_pos_obj.pos_y == 7)
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 6;
                init_pos_b.pos_y = rand() % 6 + 1;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
        else
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 6;
                init_pos_b.pos_y = rand() % 5 + 1;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
    }
    else if (init_pos_obj.pos_x == 7)
    {
        if (init_pos_obj.pos_y == 0)
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 6 + 1;
                init_pos_b.pos_y = rand() % 6;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
        else if (init_pos_obj.pos_y == 7)
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 6 + 1;
                init_pos_b.pos_y = rand() % 6 + 1;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
        else
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 6 + 1;
                init_pos_b.pos_y = rand() % 5 + 1;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
    }
    else
    {
        if (init_pos_obj.pos_y == 0)
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 5 + 1;
                init_pos_b.pos_y = rand() % 6;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
        else if (init_pos_obj.pos_y == 7)
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 5 + 1;
                init_pos_b.pos_y = rand() % 6 + 1;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
        else
        {
            while (t == 0)
            {
                init_pos_b.pos_x = rand() % 5 + 1;
                init_pos_b.pos_y = rand() % 5 + 1;
                if (init_pos_b.pos_x != init_pos_obj.pos_x && init_pos_b.pos_y != init_pos_obj.pos_y )
                {
                    t = 1;
                }
            }
        }
    }
    t = 0;
    while (t == 0)
    {
        init_pos_j.pos_x = rand() % 7;
        init_pos_j.pos_y = rand() % 7;
        if (init_pos_j.pos_x != init_pos_b.pos_x && init_pos_j.pos_y != init_pos_b.pos_y || init_pos_j.pos_x != init_pos_obj.pos_x && init_pos_j.pos_y != init_pos_obj.pos_y)
        {
            t = 1;
        }
    }
    pos_obj.pos_x = init_pos_obj.pos_x;
    pos_obj.pos_y = init_pos_obj.pos_y;
    pos_b.pos_x = init_pos_b.pos_x;
    pos_b.pos_y = init_pos_b.pos_y;
    pos_j.pos_x = init_pos_j.pos_x;
    pos_j.pos_y = init_pos_j.pos_y;
    system("clear");
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
        system("clear");
        grid(pos_j,pos_b,pos_obj);
        W = win( pos_j , pos_b , pos_obj );
    }
    if (W == 1)
    {
        printf("Gagné !\n");
    }
    else if (W == -1)
    {
        printf("Perdu !\n");
    }
}