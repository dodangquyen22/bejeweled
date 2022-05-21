#include "globals.h"
#include <iostream>
void getScore()
{
    isScore = 0;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            isScore += grid[i][j].match;
        }
    }
}