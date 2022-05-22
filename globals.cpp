#include "globals.h"
//#include <SFML/Audio.hpp>
int ts;
Vector2i offset;
RenderWindow bejeweled;
Texture t1, t2, t3, t4;
Sprite background, gems, start;
piece grid[9][9];
piece p1;
piece p2;
int x0, y0, x, y;
int click;
Vector2i pos;
bool isSwap, isMoving;
int score;
int isScore;
int sec;
Time elapsed;
Music musicc;