#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

extern int ts;
extern Vector2i offset;
extern RenderWindow bejeweled;
extern Texture t1, t2, t3;
extern Sprite background, gems, start;

struct piece
{
    int x, y, col, row, kind, match, alpha;
    piece()
    {
        match = 0;
    }
};

extern piece grid[9][9];
extern piece p1;
extern piece p2;
extern int x0, y0, x, y;
extern int click;
extern Vector2i pos;
extern bool isSwap, isMoving;
extern int score;
extern int isScore;
extern int sec;
extern Time elapsed;
extern Music musicc;