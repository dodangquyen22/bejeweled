#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;
#define MAX_NUMBER_OF_ITEMS 3
class Menu
{
public:
    Menu(float width, float height);
    ~Menu();

    void draw(RenderWindow &bejeweled);
    void MoveUp();
    void MoveDown();
    int GetPressendItem()
    {
        return selectedItemIndex;
    }

private:
    int selectedItemIndex = 0;
    Font font;
    Text menu[MAX_NUMBER_OF_ITEMS];
};