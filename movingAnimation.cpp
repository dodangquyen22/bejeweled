#include "globals.h"
void movingAnimation()
{
    isMoving = false;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            piece &p = grid[i][j];
            int dx, dy;
            for (int n = 0; n < 4; n++) // tốc độ giao hoán hai viên kim cương
            {
                dx = p.x - p.col * ts;
                dy = p.y - p.row * ts;
                if (dx)
                    p.x -= dx / abs(dx);
                if (dy)
                    p.y -= dy / abs(dy);
            }
            if (dx || dy)
                isMoving = 1;
        }
    }
}