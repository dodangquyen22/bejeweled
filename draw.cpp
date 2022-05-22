#include "globals.h"
#include <sstream>
#include <iostream>
#include <unistd.h>
void draw()
{
    sf::Font arial;
    arial.loadFromFile("font/arial.ttf");

    std::ostringstream ssScore;
    ssScore << "Score : " << score;
    sf::Text lblScore;
    lblScore.setCharacterSize(50);
    lblScore.setPosition({500, 0});
    lblScore.setFont(arial);
    lblScore.setFillColor(sf::Color::Blue);
    lblScore.setString(ssScore.str());

    std::ostringstream ssSec;
    ssSec << "Time  : " << (int)elapsed.asSeconds();

    sf::Text Timess;
    Timess.setCharacterSize(50);
    Timess.setPosition({500, 50});
    Timess.setFont(arial);
    Timess.setFillColor(sf::Color::Blue);
    Timess.setString(ssSec.str());

    bejeweled.clear();
    bejeweled.draw(background);
    bejeweled.draw(lblScore);
    bejeweled.draw(Timess);
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            piece p = grid[i][j];
            gems.setTextureRect(IntRect(p.kind * 49, 0, 49, 49)); // lấy các gems ngẫu nhiên
            gems.setPosition(p.x, p.y);                           // lấy tọa dộ vị trí mới
            gems.move(offset.x - ts, offset.y - ts);              // căn các gems vào vị trí chính giữa của bảng
            bejeweled.draw(gems);
        }
    }
    bejeweled.display();
}