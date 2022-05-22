#include "globals.h"
#include <SFML/Audio.hpp>
void swap(piece p1, piece p2);
void updateGrid()
{

    bool isPlus = false;
    if (!isMoving)
    {
        for (int i = 8; i > 0; i--)
            for (int j = 1; j <= 8; j++)
                if (grid[i][j].match)
                    for (int n = i; n > 0; n--)
                        if (!grid[n][j].match)
                        {
                            swap(grid[n][j], grid[i][j]);
                            break;
                        }

        for (int j = 1; j <= 8; j++)
            for (int i = 8, n = 0; i > 0; i--)
                if (grid[i][j].match)
                {
                    grid[i][j].kind = rand() % 7;
                    grid[i][j].y = -ts * n++;
                    grid[i][j].match = 0;
                    isPlus = true;
                    musicc.play();
                }
    }
    if (isPlus == true)
    {
        score++;
    }
}