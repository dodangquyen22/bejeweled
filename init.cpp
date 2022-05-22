#include "globals.h"
//#include "Menu.h"
void swap(piece p1, piece p2);
void init()
{
    ts = 54;
    offset = {48, 24};
    bejeweled.create(VideoMode(740, 480), "Game Bejeweled", sf::Style::Default);
    srand(time(0));
    bejeweled.setFramerateLimit(60);
    t1.loadFromFile("image/background.png");
    t2.loadFromFile("image/gems.png");
    // t4.loadFromFile("cursor.png");
    t3.loadFromFile("image/start.png");
    background.setTexture(t1);
    gems.setTexture(t2);
    // cursor.setTexture(t4);
    start.setTexture(t3);
    click = 0;
    bool isSwap = false, isMoving = false;
    score = 0;
    isScore = 0;
    sec = 120;
    musicc.openFromFile("audio/musicc.wav");
    musicc.setVolume(50);
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            grid[i][j].kind = rand() % 7; // chọn ngẫu nhiên 7 Sprite;
            grid[i][j].col = j;
            grid[i][j].row = i;
            grid[i][j].x = j * ts;
            grid[i][j].y = i * ts;
        }
    }
    swap(p1, p2);
}
