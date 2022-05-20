#include <SFML/Graphics.hpp>
#include <time.h>
//#include "Menu.h"
using namespace sf;

void init();
void gameLoop();
int main()
{
    srand(time(0));
    init();
    gameLoop();
    return 0;
}