#include "globals.h"
#include <iostream>
void getScore()
{
    score = 0;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            score += grid[i][j].match;
        }
    }
}