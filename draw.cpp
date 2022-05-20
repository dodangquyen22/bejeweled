#include "globals.h"
#include <sstream>
#include <iostream>
void draw()
{
    sf::Font arial;
    arial.loadFromFile("arial.ttf");

    std::ostringstream ssScore;
    ssScore << "Score : " << score;
    sf::Text lblScore;
    lblScore.setCharacterSize(50);
    lblScore.setPosition({500, 0});
    lblScore.setFont(arial);
    lblScore.setFillColor(sf::Color::Green);
    lblScore.setString(ssScore.str());

    bejeweled.clear();
    bejeweled.draw(background);
    bejeweled.draw(lblScore);
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