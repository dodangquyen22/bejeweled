#include "globals.h"
void swap(piece p1, piece p2);
void secondSwapIfNoMatch()
{
    swap(p1, p2);
    if (isSwap && !isMoving)
    {
        if (!score)
        {
            swap(grid[y0][x0], grid[y][x]);
        }
        isSwap = 0;
    }
}