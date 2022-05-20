#include "globals.h"
void matchFinding()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (grid[i][j].kind == grid[i + 1][j].kind)
            {
                if (grid[i][j].kind == grid[i - 1][j].kind)
                {
                    for (int n = -1; n <= 1; n++)
                        grid[i + n][j].match++;
                }
            }
            if (grid[i][j].kind == grid[i][j + 1].kind)
            {
                if (grid[i][j].kind == grid[i][j - 1].kind)
                {
                    for (int n = -1; n <= 1; n++)
                        grid[i][j + n].match++;
                }
            }
        }
    }
}