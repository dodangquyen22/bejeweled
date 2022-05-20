#include "globals.h"
void swap(piece p1, piece p2);
void mouseClick()
{
    swap(p1, p2);
    if (click == 1)
    {
        x0 = pos.x / ts + 1;
        y0 = pos.y / ts + 1;
    }
    if (click == 2)
    {
        x = pos.x / ts + 1;
        y = pos.y / ts + 1;
        if (abs(x - x0) + abs(y - y0) == 1)
        {
            swap(grid[y0][x0], grid[y][x]);
            isSwap = 1;
            click = 0;
        }
        else
            click = 1;
    }
}